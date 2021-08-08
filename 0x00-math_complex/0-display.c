#include "holberton.h"

/**
 * number_presition - return the number after the dot
 * in a float number
 * @number: float number
 * Return: Number after dot
 */

int number_presition(float number)
{
	float tmp;

	tmp = 10 * (number - (int)number);
	return ((int)tmp);
}

/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: structure of type complex
 * Return: Nothing - print
 */

void display_complex_number(complex c)
{
	printf("%.0f", c.re);

	if (c.im < 0)
	{
		printf(" - ");
		(c.im < -1)
			? printf("%.0fi\n", c.im * -1)
			: printf("i\n");
	}
	else if (!c.im)
		putchar('\n');
	else if (c.im > 0)
	{
		printf(" + ");
		(c.im > 1)
			? printf("%.0fi\n", c.im)
			: printf("i\n");
	}
}
