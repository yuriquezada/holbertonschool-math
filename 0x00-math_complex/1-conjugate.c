#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @c: structure of a complex number
 * Return: c
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
