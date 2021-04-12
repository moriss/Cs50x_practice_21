#include <cs50.h>//Name for this file is credit1
#include <stdio.h>
//Ask for user's credit card number and print out number of digits
int main(void)
{
   long credit;
   int digits, incr = 0;
   {
      credit = get_long("Number: ");//Ask user for number
      while (credit != 0)//Loop to ittirate through every digit until credit becomes zero (stopping point)
      {
         digits = credit % 10;//FET: Isolate last most digit and put into 'digits' variable
         credit = credit / 10;//Make credit one digit smaller by dividing by 10
         incr ++;//INCR Increment by one at every revolution of the loop
      }
   }
       printf("%iDigits\n = ", incr);
}

//FET = Fresh Every Time
//INCR = Increments or accumulates each time.
//INCR's are usually initialised by a zero, unlike FET's
