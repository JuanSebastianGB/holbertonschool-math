#include "holberton.h"
/**
 * multiplication - performs the multiplication operation to complex numbers.
 * @c1: complex number 1
 * @c2: complex number 2
 * @c3: complex number outside the function where the result is stored in
 * Return: Nothing - void
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.re) + (c1.im * c2.im);
}
