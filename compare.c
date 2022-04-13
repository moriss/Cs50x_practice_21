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



//Search for a name within a group of names
int main (void)
{
  char *names[3] = {"Emma", "Steven", "George"};//Create an array of names
  char *a = "Emma";//Put "Emma" into a variable called a
  for(int i = 0; i < strlen(a); i ++)//Loop through every char of every string
  {
    if(strcmp(names[i], a) == 0)//Zero means one of the names are Emma. Otherwise it is less than zero or more than zero if greater or less than (see below)
  {
    printf("Success");// If Emma is present
    return 0;
  }
  printf("Not Found!");//Of Emma mpt present
  return 1;
  }
}
//C uses the ascii numerical value (int) of each character to compare if equal, greater than or less than.

//Type a name to test if present
int main (void)
{
  char *names[] = {"Emma", "Steven", "George"};
  char *a = get_string("Enter Name: ");
  for(int i = 0; i < strlen(a); i ++)
  {
    if(strcmp(names[i], a) == 0)
  {
    printf("Success");
    return 0;
  }
  printf("Not Found!");
  return 1;
  }
}
