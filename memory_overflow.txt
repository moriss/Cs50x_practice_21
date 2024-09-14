#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
// Multiply exponentially with a one second intervals per integer
int main (void)
{
  int start = 1;//Set start to 1
  while (start > 0)//'start' needs to be higher than zero (which it is)
  {
    start = start * 2;//At eah ittiration, start multiplies by two. shorthand for this is 'start *= 2'.
    printf("%i ", start);//Display onscreen the resultes of your code
    sleep(1);//This creates a one-second interval between each ittiration.
  }
}
//##############################################################
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Now try with your own program
void my(int x);//Function prototype
int main (void)
{
  int start = 1;//Set the start variable to 1.
  my(start);//Pass the main variable 'start' into your 'my' function
}
  
void my(int x)//'x' is the input of 'my' variable.
{
  x = 1;//Set the 'x' variable to 1;
  while (x > 0)//The while loop condition is for x to be greater than zero, which it is. 
  {
    x = x * 2;//At each ittiration, x is doubled. Shortand for 'x = x * 2' is 'x *= 2'
    sleep(1);//This creates a one-second interval between ittirations
    printf("%i ", x);//Display your results on-screen.
  }
  
}
//##############################################################
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Now with a 'return' value
int my(int x);//Function prototype
int main (void)
{
  int start = 1;
  my(start);//
}

int my(int x)//Having your function initialised with 'int', requires that you have a return value (see below)
{
  x = 1;
  while (x > 0)
  {
    x = x * 2;
    sleep(1);
    printf("%i ", x);
  }
  return 0;//Setting the return value to zero means "All is good"
}
//################################################################


