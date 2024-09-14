#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//Add up each individual digit of user's credit card number and also count how many digits there are.
int main(void)
{
    long credit;//The long datatype is used for, well long digits.
    int add = 0, pos = 0, digit = 0;//Initialising my add and pos functions
    credit = get_long("Card Number: ");//Get card from user

    while(credit !=0)//Keep doing below whilst credit card is above zero
    {
        credit = credit / 10;//First divide credit by 10 (98898787 becomes 9889878.7)
        digit = credit % 10;//This exposes the remainder after dividing by 10. (7)
        add = add + digit;//This adds the number 7 to the add variable.
        pos ++;//This returns the position of the digit. (pos = 0)
    }   //This function goes back to the top and keeps doing this as credit reduces towards zero


    printf("%i = Total of added digits\n" ,add);//All digits added together
    printf("%i = Ammount of individual digits\n" ,pos);//Number of individual digits
}

