#include <cs50.h>
#include <stdio.h>
//Ask for user's credit card number
//Add up every evenly- positioned digit
//Multiply every oddly-positioned digit by 2 first, before also adding these up
//Print out number of digits and the total sum of the digits as per above.
int main(void)
{
   long n, credit;
   int total_sum = 0, digit = 0, position = 0, length = 0, temp = 0;//Lets initialise some useful variables
   n = get_long("Card Number ") ; //take user's credit card number
   credit = n;//I am preserving the initial user input inside 'n' just in case I need it later.
   while(credit != 0)//Loop until credit reaches zero
   {
      digit = credit % 10;//select the remainder digit when credit is divided by 10 (last most) and put into digit variable FET

      if(position % 2 != 0)//Seek out the odd positions numbers (remainder NOT zero when divided by 2)
      {
         temp =  digit * 2;//multiply every odd digit by two. FET. I'm using the 'temp' variable to keep things neat.
         total_sum = total_sum + temp;//Add the sum of temp into total_sum.
      }
      else
      {
         total_sum = total_sum + credit % 10;//Simply add all the evenly-positioned numbers
      }
      position++;//Adds one to itself at each ittiration of the loop.
      credit = credit / 10;//Reduces credit by one digit each time. 
   }
   printf("Number of digits = %d\n",position);
   printf("Total sum = %d\n ",total_sum);
}
