#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: structure of type complex
 * Return: Nothing - print
 */

void display_complex_number(complex c)
{
	printf("%.0f", (double)c.re);

	if (c.im < 0)
		printf(" - %.0fi\n", (double)c.im);
	else if (!c.im)
		putchar('\n');
	else if (c.im)
		printf(" + %.0fi\n", (double)c.im);
}
