#include "heron.h"

/**
 * *add_node - to add node at the start of the heron list
 * @head: Head list
 * @p: Number to get sqrt
 * Return: head node
 */

t_cell *add_node(t_cell **head, double p)
{

	t_cell *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(t_cell));
	if (!new)
		return (NULL);

	if (*head == NULL)/*First node*/
	{
		new->elt = 1;
		new->next = *head;
		*head = new;
		return (new);
	}
	/* The actual node is not the first one */
	new->elt = 0.5 * ((*head)->elt + p / (*head)->elt);
	new->next = *head;
	*head = new;
	return (new);

}

t_cell *heron(double p, double x0)
{
	t_cell *head;
	int i = x0;

	head = NULL;

	for (; i <= x0 + 6; i++)
		add_node(&head, p);

	return (head);
} 
