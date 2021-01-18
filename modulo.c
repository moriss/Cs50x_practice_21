#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Determine if a user's input is odd or even using modulo

int main (void)
{
  int user = get_int("Enter a number: ");
  if( user % 2 == 0 )//If price  modulo 2 is zero
  {
    printf("%i  is an even number " , user);
    return 0;
  }
  printf("%i  is an odd number" , user );
  return 1;
}
//################################################################
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Check if a user's input is an even integer using modulo
//Then try with your own program
int my(int x);
int main (void)
{
  int user = get_int("Enter a number: ");//Get an integer from the user
  my(user);
}

int my(int x)
{
  if( x % 2 == 0 )//If price  modulo 2 is zero
  {
    printf("%i  is an even number " , x);
    return 0;//Program ends here with even number selected
  }
  printf("%i  is an odd number" , x );
  return 1;//programs 'falls through' to here if odd. 
}
//######################################################





