#include <cs50.h>
#include <stdio.h>
//Ask for user's credit card number
//Add up every digit of the card number
//Print out number of digits

int main(void)
{
   long credit;//Declare a long variable
   credit = get_long("Card Number " );//get card number from user and put into 'credit' variable
   int digit;//Used to pick out each digit at each loop rotation.
   int adthem = 0;//For adding up the digits as you work through the loop
   int digit_count = 0;

   while (credit > 0)//Lets keep looping while credit is less than zero
   {
      digit = credit % 10;//put the individual digit into 'digit'
      adthem = adthem + digit;//Keep adding digit into adthem  until the loop stops
      digit_count = digit_count + 1;
      credit = credit / 10 ; //Reduce credit (divide by ten) to get to the next digit in sequence
   }
   printf("Sum of Digits = %i  \n", adthem);//Tara!
   printf("Number of Digits = %i  ", digit_count);//Tara!
}




