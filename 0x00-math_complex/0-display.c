#include "holberton.h"
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
