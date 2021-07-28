#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - display the complex numbers
 * @c: structure of a complex number
 * Return: void
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("%di\n", c.im);
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%d\n", c.im);
	}
	else
	{
		if (c.im < 0)
			printf("%d - %di\n", c.re, c.im * (-1));
		else if (c.im == 0)
			printf("%d\n", c.re);
		else
			printf("%d + %di\n", c.re, c.im);
	}
}
