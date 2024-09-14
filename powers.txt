#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Raise the base number to a power using pow()
int main (void)
{
  float base = get_float("Enter a base number: ");//Get a base  number from the user
  float exponent = get_float("Enter an exponent value: ");//Get the exponent number from the user
  printf("%0.1f ", pow(base, exponent));//Show the answer onscreen using the pow() function
  
}
//My maths knowledge is pretty basic. Don't be put off by tha fancy words!
//'Exponent' equates to the number of times 'base' is multiplied by itself.
//if base = 2 and exponent =3, base is multiplied 3 times so the answer is 8


//################################################################
/*The function pow() is used to calculate the power raised to the base value. It takes two arguments. It returns the power raised to the base value. 
It is declared in “math. h” header file.*/
#################################################################






