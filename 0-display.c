#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: structure of type complex
 * Return: Nothing - print
 */

void display_complex_number(complex c)
{
	if (c.im)
		printf("%d + %di\n", c.re, c.im);
	else
		printf("%d\n", c.re);
}
