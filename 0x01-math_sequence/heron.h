#ifndef _HERON_H_
#define _HERON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/**
 * struct t_series - list of results in each iteration of Heron sqrt
 * @elt: Result of the application of the serie
 * @next: point to the next node
 */

typedef struct t_series
{
	float elt;
	struct t_series *next;
} t_cell;

t_cell *heron(double p, double x0);
t_cell *add_node(t_cell **head, double p);

#endif /* _HERON_H_ */
