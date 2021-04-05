#include <cs50.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Comparing to characters (a,c or 4 ,6 ) = works.
//Comparing ints (numbers)= works
//The difference in addresses is last TWO digits compared to last ONE digit below
//comparing 2 strings = does NOT work
int main(void)
{
   int j = get_int("name 1:");
   int k = get_int("name 2:");
   if( j == k)
   {
      printf("Same");//Typing identical ints will give you this
   }
   else
   {
     printf("differnt");
   }
}
//############################################################
#include <cs50.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Comparing to characters (a,c or 4 ,6 ) = works.
//Comparing ints (numbers)= works
//The difference in addresses is last TWO digits compared to last ONE digit below
//comparing 2 strings = does NOT work
int main(void)
{
   char j = get_char("name 1:");
   char k = get_char("name 2:");
   if( j == k)
   {
      printf("Same");//Typing identical chars will give you this
   }
   else
   {
     printf("differnt");
   }
}
//###########################################################

#include <cs50.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Comparing to characters (a,c or 4 ,6 ) = works.
//Comparing ints (numbers)= works
//The difference in addresses is last TWO digits compared to last ONE digit below
//comparing 2 strings = does NOT work
int main(void)
{
   string j = get_string("name 1:");
   string k = get_string("name 2:");
   if( j == k)
   {
      printf("Same");
   }
   else
   {
     printf("different");//Typing identical strings will give you this
   }
}



