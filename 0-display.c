#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - display the complex numbers
 * @c: structure of a complex number
 * Return: void
 */
void display_complex_number(complex c)
{
	c.im == 0 ? printf("%d\n", c.re) : printf("%d + %di\n", c.re, c.im);
}
