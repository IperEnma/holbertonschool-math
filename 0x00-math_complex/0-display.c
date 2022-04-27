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
		if (x.im < 0 && x.im != -1)
		{
			x.im = x.im * -1;
			printf("%g - %gi\n", x.re, x.im);
		}
		else if (x.im == 1 || x.im == -1)
		{
			if (x.im == -1)
				printf("%g - i\n", x.re);
			else
				printf("%g + i\n", x.re);
		}
		else
			printf("%g + %gi\n", x.re, x.im);
	}
	else
	{
		printf("%g\n", x.re);
	}
}
