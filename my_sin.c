/******************************************************************************
The program calculates the value of sin(x) using Taylor series.
*******************************************************************************/
  
#include <stdio.h>
#include <math.h>
#include "info.h"

double my_sin (double x);

 
int main (void){
  double x;
  double twopi = 2 *pi ;
  printf("The program calculates the value of sin(x) using Taylor series.\nPlease enter a number (radian): ");
  scanf ("%lf", &x);
       /*The while loops convert the input to a smaller radian (using this calculation I avoided limiting the value)*/
  while (x > twopi) {x -= twopi;}
  while (x < -twopi) {x += twopi;}
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nUsing this program, sin(%f)=%f\nUsing math library, sin(%f)=%f\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",x, my_sin (x), x, sin (x));
  
return 0;
}
 
  double my_sin (double x) { 
  double counter = x, denominator = 1, element = x, sum = x;
  int newi = 1, i;
  for (i = 2; i <= 30; i++)    {
      newi += 2;
      counter = counter * x * x; /*Calculate the power*/
      denominator = denominator * (newi - 1) * newi; /*Calculate the factorial*/
      element = counter / denominator;
      if (element < stop && element > (-stop)) /*Stop conditions*/
	return sum;
      (i % 2) ? (element = element) : (element = element * (-1)); /*Adding or subtracting the element depending on the location*/
      sum += element;
    }
return sum;
}
