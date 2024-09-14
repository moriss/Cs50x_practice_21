
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

/**The first prints the actual string and the second prints out the address location of the first byte via the format code '%p' **/

//TASK: Create a string variable and a)Print out the whole string and b)Print out the address of the first byte.

//To further prove this is the case
int main(void)
{
   char *a = get_string("word ");
   char *t = a;
   t[0] = toupper(t[0]);
   printf("%s\n %s", a,t);

}
//The first character of BOTH a and t change to uppercase.

//Interestingly in the example below, both addresses of a and t are identical (as expected),  other than the very last digit of the address.
int main(void)
{
   char *a = get_string("word ");
   char *t = a;
   t[0] = toupper(t[0]);
   printf("%p\n%p", &a,&t);

}
//TASK: Create a second pointer variable which points to the same location as the first. (use strings)


//Below is how to actually copy a string to another location in memory
int main(void)
{
   char *a = get_string("word ");
   char *t = malloc(strlen(a+1));//Allocate memory of the correct size to copy a into. The extra 1 is for the null terminating character.
   for(int i = 0; i <= strlen(a); i ++)//setting string length to 'equals to a', allocates the extra bite for the null terminating character.
   {
      t[i] = a[i];//Copy a's ith's into t's ith's
      t[0] = toupper(t[0]);//Change first letter in t to uppercase.
   }
   printf("%s\n%s\n", t,a);//Only t's fist letter is uppercase. a's remains lowercase.
}
//This assumes you have initally typed a string deliberately with a lowercase first letter.

//TASK: Save a string in another location in memory.

//Using the function strcpy (string copy) from the cs50 library
//Copy a string to another variable using string copy (strcpy)
int main(void)
{
   char *a = get_string("word ");
   char *t = malloc(strlen(a+1));//Allocate memory of the correct size to copy a into. The extra 1 is for the null terminating character.
   strcpy(t,a);//This copies a's chars over to t. This is in place of having to use your own loop to achieve the same.
   t[0] = toupper(t[0]);

   printf("%s\n%s\n", t,a);//Only t's fist letter is uppercase. a's remains lowercase.
}
//TASK: Use the string copy function in place of your own loop.
