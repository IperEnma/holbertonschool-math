#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - display complex number
 * @x: list
 * Return: nothing
 */
void display_complex_number(complex x)
{
	if (x.im != 0)
	{
		printf("%g + %gi\n", x.re, x.im);
		if (x.im < 0)
			printf("%g - %gi\n", x.re, x.im);
	}
	else
	{
		printf("%g\n", x.re);
	}
}
