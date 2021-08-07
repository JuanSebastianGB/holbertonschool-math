#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct complex_numbers - struct to represent complex numbers
 * @re: The real part of the number
 * @im: The imaginary part of the number
 *
 */
typedef struct complex_numbers
{
	float re;
	float im;
} complex;

void display_complex_number(complex c);

#endif /*_HOLBERTON_H_*/
