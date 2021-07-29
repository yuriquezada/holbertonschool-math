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
			printf("- %fi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%f\n", c.im);
	}
	else
	{
		if (c.im < -1)
			printf("%f - %fi\n", c.re, c.im * (-1));
		else if (c.im == -1)
			printf("%f - i\n", c.re);
		else if (c.im == 0)
			printf("%f\n", c.re);
		else if (c.im == 1)
			printf("%f + i\n", c.re);
		else
			printf("%f + %fi\n", c.re, c.im);
	}
}
