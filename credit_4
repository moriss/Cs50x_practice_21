#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//c_practice credit_4
//Ask for user's credit card number
//Add up every evenly- positioned digit
//Multiply every oddly-positioned digit by 2 first, before also adding these up also
//Print out number of digits and the total sum of the digits.
int main(void)
{
    long number = get_long("Card Number");//Prompt user for credit card number
    long x = number;//Put into x so you can preserve number for future tasks.
    int count = 0, addup;//Set a counter and an adding up variable.
    int digit;//Initialise a variable to select individual digits within the card
    while (x != 0)//Loop until x reaches zero
    {
        digit = x % 10;//Put x mod 10 into digit.
        if(count % 2 == 0)//Where an oddly positioned number is selected, do the following.
        {
            addup = addup + digit;//add digit to addup.
        }
        else
        {
            addup = addup + (digit * 2);//multiply evenly positioned numbers by two before adding them to addup.
        }
        count ++;//Increment count by one
        x = x / 10;//divide x by ten to reach next number in line.
    }
    printf("Total = %i\nDigit count =  %i ", addup, count);//Output number of digits and sum they add up to.
}

//Below have already been done:
//c_practice credits_1
//c_practice credits_2
//c_practice credit_3
