#include "holberton.h"
/**
 * modulus - modulus complex number
 * @c: list
 * Return: modulus
 */
double modulus(complex c)
{
	double re = 0;

	re = pow((pow(c.im, 2) + pow(c.re, 2)), 1/2);
	return (re);
}
