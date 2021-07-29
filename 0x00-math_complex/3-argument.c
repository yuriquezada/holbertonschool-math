#include "holberton.h"
#include <math.h>

/**
 * argument - return the argument of a given complex number
 * @c: structure of a complex number
 * Return: c
 */

double argument(complex c)
{
	double arg;
	
	arg = atan((double)(c.im) / (double)(c.re));
	return (arg);
}
