#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
void mali(void);
//Compare 2 strings to test if they are the same
int main (void)
{
  char *names_1 =  get_string("Name 1:");
  char *names_2 =  get_string("Name 1:");
  if(strcmp(names_1 , names_2) == 0)
  {
    printf("Same");
    return 0;
  }
  printf("Different");
  return 1;


}
