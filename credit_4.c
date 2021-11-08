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
    long number = get_long("Card Number");
    long x = number;
    int count = 0, addup;
    int digit;
    while (x != 0)
    {
        digit = x % 10;
        if(count % 2 == 0)
        {
            addup = addup + digit;
        }
        else
        {
            addup = addup + (digit * 2);
        }
        count ++;
        x = x / 10;
    }
    printf("Total = %i\nDigit count =  %i ", addup, count);
}

//Below have already been done:
//c_practice credits_1
//c_practice credits_2
//c_practice credit_3
