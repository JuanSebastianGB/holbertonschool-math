#include "holberton.h"

/**
 * argument - returns the argument of a given complex number.
 * @c: structure of type complex
 * Return: the argument of the complex number
 *
 */

double argument(complex c)
{
	if (!c.re)
		exit(98);
	return (atan(c.im / c.re));
}
