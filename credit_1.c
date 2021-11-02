#include <cs50.h>//Name for this file is credit1
#include <stdio.h>
//Ask for user's credit card number and print out number of digits
int main(void)
{
   int count = 0;//Set counter to zero
   long card = get_long("Card Number: ");//Prompt user for credit card number
    while (card != 0)//Set the loop condition (while card is NOT zero)
    {
        count ++;//Increment counter by 1
        card = card / 10;//Divide card by 10 to get to next left digit, working your way down towards zero.
    }
      printf("%i \n", count);//Print the 'count' sum.

}

