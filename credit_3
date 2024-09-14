#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//NEXT = c_practice credit_3.c
//Ask for user's credit card number then a) add up every digit and  b) print out number of digits.
//Example: card number 2222. a)=8  b)=4
int main(void)
{
    long card_number = get_long("Card Number: ");//Prompt user for card number
    long x = card_number;//Put card_number into x to preserve card_number for any future tasks.
    int count_digits = 0, addup = 0, digit;//Set variables to count digits, add them up and 'digit' to isolate rightmost digit.
    while(x != 0)//Set while loop condition to loop while card is above zero.
    {
        digit = x % 10;//Isolate rightmost digit putting it into x
        addup = addup + digit;//Place digit in the addup 'accumulator', so digit is added at each cycle of the loop.
        count_digits ++;//Increment count_digits by one to count number of digits.
        x = x / 10;//put x divided by 10 into x to access next rightmost digit (done at first step in loop above)
    }
    printf("Sum= %i \nTotal Digits= %i \n", addup, count_digits);
}

//A version using your own function
#include <cs50.h>//Credit2 with own program/function
#include <stdio.h>//Ask for user's credit card number then a) add up every digit and  b) print out number of digits.
void my(long card);
//Create you own function for below.
//Ask for user's credit card number then a) add up every digit and  b) print out number of digits.
//Example: card number 2222. a)=8  b)=4


int main (void)
{
    long credit_card = get_long("card number ");
    my(credit_card);
}

   void my(long card)
   {
       int digit, addup = 0, count = 0;
    while (card!=0)
    {
        digit = card % 10;
        addup = addup + digit;
        count ++;
        card = card / 10;
    }
    printf("%i \n %i ", addup , count);
   }







//Below have already been done:
//c_practice credits_1
//c_practice credits_2
//c_practice credit_3
