#ifndef complexxxx
#define complexxxx
#include <stdio.h>
#include <math.h>
/**
 * struct Complex - structura
 * @re: real number
 * @im: imaginary number
 */
typedef struct Complex
{
	double re;
     double im;
} complex;
void display_complex_number(complex x);
complex conjugate(complex c);
double modulus(complex c);
#endif
