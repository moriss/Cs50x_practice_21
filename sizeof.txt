#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
void mali(void);
//The sizeof excercise
//This simply shows that when allocating space (10 ints as per below), you have allocated zero to 9 int spaces.
//The contents of memory at 10 is random as it breaks through our space allocation. Known as a buffer overflow.
int main (void)
{
  mali();
}

void mali(void)
{
  int *x = malloc(10 * sizeof(int));
  printf("%i\n", x[10]);
  printf("%i\n", x[9]);
  printf("%i\n", x[8]);
  printf("%i\n", x[0]);
}
