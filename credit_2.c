#include <math.h>
#include <stdlib.h>
//NEXT = c_practice credit_2.c
//Add up every digit of a credit card number
int main(void)
{
    int x, addup = 0;//Create variables to store lastmost digit and add up all digits.
    long number = get_long("Card Number: ");//Prompt user for their card number
    while(number  != 0)//Loop through below while number hasn't yet reached zero.
    {
        x = number % 10;//put lastmost digit into x
        addup = addup + x;//add x to the addup variable initially set at zero.
        number = number / 10;//divide number by ten to reach the next digit to the left.
    }
    printf("%i \n" , addup);//Print total sum of addup
}


//Below is with own function

#include <cs50.h>//Credit2 with own program/function
#include <stdio.h>//Add up every digit of a credit card number
void my(long number);
int main (void)
{

    long card = get_long("card_number");
    my(card);
}

    void my(long number)
    {
        int digit, addup = 0;
    while(number != 0)//Run down x to zero
    {
        digit = number % 10;//put number % 10 into digit
        addup = addup + digit;//add digit to addup
        number = number / 10;//increment number by one less by dividing it by ten. (to access next left digit)
    }
    printf("%i ", addup);//print out the contents of addup.(sum of all digits.)
    }



//Below have already been done:
//c_practice credits_1
//c_practice credits_2
