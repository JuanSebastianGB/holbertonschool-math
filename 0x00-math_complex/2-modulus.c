#include "holberton.h"

/**
 * modulus - returns the modulus of a given complex number.
 * @c: structure of type complex
 * Return: the modulus of the complex number
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
