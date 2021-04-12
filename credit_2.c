#include <cs50.h>
#include <stdio.h>
//Add up every digit of a credit card number
int main(void)
{
   long credit;//Declare a long variable
   credit = get_long("Card Number " );//get card number from user and put into 'credit' variable
   int digit;//Used to pick out each digit at each loop rotation.
   int adthem = 0;//For adding up the digits as you work through the loop

   while (credit > 0)//Lets keep looping while credit is greater than zero
   {
      digit = credit % 10;//put the individual digit into 'digit'
      adthem = adthem + digit;//Keep adding digit into adthem  until the loop stops
      credit = credit / 10 ; //Reduce credit (divide by ten) to get to the next digit in sequence
   }
   printf("%i\n", adthem);//Tarra!
}




