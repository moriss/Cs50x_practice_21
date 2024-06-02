#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//copy a string to another location in memory
int main (void)
{
  char *x = get_string("String: ");//Get string from user
  char *y = malloc(strlen(x)+1);//Create a space in memory to copy string over to. Add 1 extra for the null terminating character.
  int n = strlen(x);//Create a variable for the string length of x
  for(int i = 0; i <= n; i ++)//Loop through each char to copy over to y
  {
    y[i] = x[i];//copy over each char from x to y
  }
  x[0 ]= toupper(x[0]);//change first letter of x to uppercase to prove y is a true copy.
  printf("%s\n %s\n", y, x);//print both x and y
}


//Now do same using the strcpy function
int main (void)
{
  char *x = "money";

  printf("%s\n" ,x);
  char *y = malloc(strlen(x)+1);
  strcpy(y,x);
  y[0] = toupper(y[0]);
  printf("%s ", y);
}
