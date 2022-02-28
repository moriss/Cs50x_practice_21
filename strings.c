
/*There is no such thing as a string.
  String is really just char *.
  
  char * x is a pointer, pointing to the address of the first byte of the string. 
  The null terminating character \0, indicates the end of the string.
  
  char *x effectively removes the cs50 training wheels (previously string) so the cs50 library is no longer required. 
  
  */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//lecture 4

int main(void)
{
    char *ten = "Andrew is a doughnut!";
  
    printf("%s \n", ten);//variable value
    printf("%p \n", ten);//Pointer value
}

/**The first prints the actual string and the second prints out the address location via the format code '%p' **/


