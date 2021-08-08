#include "heron.h"

/**
 * *add_node - to add node at the start of the heron list
 * @head: Head list
 * @p: Nunmber to get sqrt
 * Return: Nothing - void
 */

t_cell *add_node(t_cell **head, double p)
{
	t_cell *new, *next;

	if (!head || !*head)
		return (NULL);
	new = malloc(sizeof(new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	next = (*head)->next;
	new->elt = 0.5 * (next->elt + p / next->elt);
	new->next = *head;
	*head = new;
	return (new);

}

t_cell *heron(double p, double x0)
{
	t_cell *head;
	t_cell first = {x0, NULL};

	printf("Valor recibido = %f",x0);
/*	int i = 1;*/



	head = &first;
	add_node(&head, p);
/*
	while (i < 7)
	{
		add_node(&head, p);
		i++;
	}
*/
	return (head);
}
