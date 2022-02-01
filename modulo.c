#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Check if a user's input is an even integer using modulo
int main (void)
{
  int user = get_int("Enter a number: ");//Get an integer from the user
 
  if( user % 2 == 0 )//If price  modulo 2 is zero...
  {
    printf("%i  is an even number " , user);//Confirm onscreen it is even
    return 0;//Program ends here with even number selected
  }
  printf("%i  is an odd number" , user );//Confirm oncscreen it is odd
  return 1;//programs 'falls through' to here if odd. 
}

//################################################################
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Check if a user's input is an even integer using modulo with your own function
int my(int x);
int main (void)
{
  int user = get_int("Enter a number: ");//Get an integer from the user
  my(user);
}

int my(int x)
{
  if( x % 2 == 0 )//If remainder is zero when dividing by two..
  {
    printf("%i  is an even number " , x);
    return 0;//Program ends here with even number selected
  }
  printf("%i  is an odd number" , x );
  return 1;//programs 'falls through' to here if odd. 
}

//######################################################
