#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number.
 * @c: structure of type complex
 * Return: structure of type complex
 */

complex conjugate(complex c)
{
	c.im *= -1;

	return (c);
}
