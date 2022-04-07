#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//Compare 2 strings to test if they are the same
int main (void)
{
  char *names_1 =  get_string("Name 1:");//input firt name
  char *names_2 =  get_string("Name 1:");//input second name
  if(strcmp(names_1 , names_2) == 0)//zero is  outputed if strings are the same
  {
    printf("Same");
    return 0;// Returning zero here, stops the program here if true. 
  }
  printf("Different");
  //If return wasn't used above, both 'same' and 'different' would show on screen.
}
