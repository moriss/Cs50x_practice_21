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

#include <cs50.h>//Do Credit
#include <stdio.h>
int main (void)
{
    long n, credit;//Set up long variables for n and credit. n is for referring back to the original number later in the code.
    int digit;//Variable for isolating individual digits in the number
    int addup = 0;//This accumulates the values so you end up with a total sum as per luhn's algorythm
    int position = 0;//Tests for parity and digit count
    int times_digit;
    n = get_long("Card Number: ");//Take user's card number placing it in 'n'
        credit = n;//Put n into credit so you can start using credit
       while(credit !=0)//Keep looping while credit reduces to (but doesn't become) zero
       {
           digit = credit % 10;//Pick out the digit when mod by 10. (lastmost)
           if (position % 2 != 0)//A way to locate oddly positioned numbers
           {
               times_digit = digit * 2;

               if(times_digit > 9)//Test if digit, when multiplied by two, is greater than 9 (double digit)
               {
                   addup = addup + (times_digit % 10 + times_digit / 10);//If so then ad digit mod 10 to digit divided by 10 (19 becomes 9 + 1)
               }
               else
               {
                   addup = addup + (times_digit);//Multiply odd positioned digits by two if answer is not greater than 9
               }
           }
           else
           {
               addup = addup + digit;//If not over 9, just add up digit
           }
            position ++;//Increment the position by one
            credit = credit / 10;//divide credit by 10 so it reduces by one digit.
        }

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


//BELOW DONE WITH IT'S OWN PROGRAM/FUNCTION
#include <cs50.h>//Do Credit
#include <stdio.h>
void my(long n);
int main (void)
{
    long card_number = get_long("Card Number: ");//Take user's card number placing it in 'n'
    my(card_number);
}

    void my(long n)
    {
        long credit;//Set up long variables for n and credit. n is for referring back to the original number later in the code.
    int digit;//Variable for isolating individual digits in the number
    int addup = 0;//This accumulates the values so you end up with a total sum as per luhn's algorythm
    int position = 0;//Tests for parity and digit count

        credit = n;//Put n into credit to work on n and preserve credit for other uses.
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

                }
                else if (position == 16 && (master > 50 && master < 56))//Testing for Mastercard
                {
                    printf("MASTERCARD\n");

                }
                else if ((position == 16) && visa == 4 )//Testing for Visa 16 digit card
                {
                    printf("VISA\n");

                }
                else if ((position == 13 ) && visashort == 4 )//Testing for Visa 13 digit card
                {
                    printf("VISA\n");

                }
                else {
                    printf("INVALID\n");//If luhn's algo checks out but card number or first digits don't.
                }
        }
        else
        {
            printf("INVALID\n");//If Lugn's alog doesn't check out

        }
    }




