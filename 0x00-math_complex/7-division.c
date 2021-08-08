#include "holberton.h"
/**
 * division - performs the division operation to complex numbers.
 * @c1: complex number numerator
 * @c2: complex number denominator
 * @c3: complex number outside the function where the result is stored in
 * Return: Nothing - void
 */
void division(complex c1, complex c2, complex *c3)
{
	float denominator;

	if (!c2.re || !c2.im)
		exit(98);

	denominator = (pow(c2.re, 2) + pow(c2.im, 2));
	c3->re = (c1.re * c2.re + c1.im * c2.im) / denominator;
	c3->im = (c2.re * c1.im - c1.re * c2.im) / denominator;

}
