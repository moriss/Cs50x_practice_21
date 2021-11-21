#include <cs50.h>//Do Credit
#include <stdio.h>
int main (void)
{
    long n, credit;//Set up long variables for n and credit. n is for referring back to the original number later in the code.
    int digit;//Variable for isolating individual digits in the number
    int addup = 0;//This accumulates the values so you end up with a total sum as per luhn's algorythm
    int position = 0;//Tests for parity and digit count
    n = get_long("Card Number: ");//Take user's card number placing it in 'n'
        credit = n;//Put n into credit so you can start using credit
       while(credit !=0)//Keep looping while credit reduces to (but doesn't become) zero
       {
           digit = credit % 10;//Pick out the digit when mod by 10. (lastmost)
           if (position % 2 != 0)//A way to locate oddly positioned numbers
           {
               digit = digit *2;//Multiply odd positioned digits by two
               if(digit > 9)//Test if digit, when multiplied by two, is greater than 9 (double digit)
               {
                   addup = addup + (digit % 10 + digit / 10);//If so then ad digit mod 10 to digit divided by 10 (19 becomes 9 + 1)
               }
               else
               {
                   addup = addup + digit;//Now ad digit to addup
               }
           }
           else
           {
               addup = addup + digit;//If not over 9, just add up digit
           }
            position ++;//Increment the position by one
            credit = credit / 10;//divide credit by 10 so it reduces by one digit.
        }

        int a = n / 1000000000000000;//Testing variables for implementing individual sums per card
        int b = n / 100000000000000;//As above
            int amex = n / 10000000000000;//Find Amex's last two numbers (from 15 digits)
            int master = n / 100000000000000;//Find Mastercard;s last two numbers (from 16 digits)
            int visa = n / 1000000000000000;//Find Visa's last number (from 16 digits)
            int visashort = n / 1000000000000;//Find Visa's last number (from 13 digits)
            //printf("%i %i\n ", a,b);//These don't need to be printed but are helpful when revisiting this.
        if (addup % 10 == 0)//Lun's algorythm to test if total's last digit is zero
        {

                if (position == 15 && (amex == 34 || amex == 37))//Testing for Amex
                {
                    printf("AMEX\n ");
                    return 0;
                }
                else if (position == 16 && (master > 50 && master < 56))//Testing for Mastercard
                {
                    printf("MASTERCARD\n");
                    return 0;
                }
                else if ((position == 16) && visa == 4 )//Testing for Visa 16 digit card
                {
                    printf("VISA\n");
                    return 0;
                }
                else if ((position == 13 ) && visashort == 4 )//Testing for Visa 13 digit card
                {
                    printf("VISA\n");
                    return 0;
                }
                else {
                    printf("INVALID\n");//If luhn's algo checks out but card number or first digits don't.
                }
        }
        else
        {
            printf("INVALID\n");//If Lugn's alog doesn't check out
            return 1;
        }
}
//American Express numbers start 34 or 37  and          15-digits   AMEX\n
//MasterCard numbers start 51, 52, 53, 54, or 55   and  16-digits   MASTERCARD\n
//Visa numbers start with 4   and                       13- and 16-digits   VISA\n


//BELOW IS ANOTHER WAY TO DO IT

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//NB TEST LUHNS ALOGRYTHM WITH YOUR CREDIT CARD TO WORK OUT WHAT'S WRONG.
//c_practice credit_6
//Do the complete cs50 credit card task in its entirety and test it.
//https://cs50.harvard.edu/x/2020/psets/1/credit/#:~:text=34%20or%2037
int main(void)
{
    int digit, digit_1, digit_2, addup  = 0, count = 0, times, greater;
    long card = get_long("Card Number");
    long x = card;
    do
    {
        
        digit = x % 10;
            if(count % 2 != 0)//Oddly positioned numbers
                {
                    addup = addup + digit * 2;//Add digit times two to addup for oddly positioned numbers
                    if (digit * 2 > 9)
                    {
                        addup = addup + ( digit % 10 + digit / 10);
                    }
                }
                else {
                    addup = addup + digit;//Add digit to addup for evenly positioned numbers
                }
                x = x / 10;//divide x by ten to get to next digit
                count ++;//Increment count by one
    }
    while(x != 0);
    
    digit_1 = digit; digit_2 = digit + 1;//create varialbes for last and second last digits.

    if( (addup % 10 == 0) && (digit_1 == 3)  &&  (digit_2 == 4 || digit_2 == 7) )//**If luhn is true, and digits are correct...
    {
        printf("AMEX");//print this fo amex
    }
    else if(addup % 10 == 0 && digit_1 == 4)//**
    {
        printf("VISA");//print this for visa
    }
    else if((addup % 10 == 0) && (digit_1 == 5) && (digit_2 >= 0 && digit_2 >= 6 ))//**
    {
        printf("MASTERCARD");//print this for mastercard
    }
    else
    {
        printf("%i INVALID\n", addup);//If not true or numbers don't match up, print invalid
    }
}

//I tested this here https://developer.paypal.com/docs/payflow/payflow-pro/payflow-pro-testing/  Some worked and some did'nt.
//I also "short" tested it by making up numbers that fitted each card and where addup returned zero. These all worked for each card. 
//Amex start 34 or 37
//Mastercard start 51, 52, 53, 54, or 55
//Visa start with No 4
//CHECKSUM:
//Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
//Add the sum to the sum of the digits that weren’t multiplied by 2.
//If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
//Output AMEX\n or MASTERCARD\n or VISA\n or INVALID\n


//Purpose of Luhn's algorythm = Detect typos without having to refer to a database


//Below have already been done:
//c_practice credits_1
//c_practice credits_2
//c_practice credit_3
//c_practice credit_4
