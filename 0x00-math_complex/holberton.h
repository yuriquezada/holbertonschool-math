#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
/**
 * struct print - print type and print function
 * @char_to_compare: print type
 * @f: print function
 */
typedef struct number_complex
{
	int re;
	int im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);

#endif
