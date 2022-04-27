#include "holberton.h"
#include <stdio.h>
/**
 * conjuta - conjugate complex number
 * @x: list
 * Return: nothing
 */
complex conjugate(complex x)
{
	x.im = x.im * -1;
	return (x);
}
