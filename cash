#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//Cash. Print out least number of coins required for user's change
int main(void)
{
    int cash;  float owed; float quarter = 25; float dime = 10; float nickle= 5; float penny = 1 ;  int add = 0;
    do
    {
        owed = get_float("Change owed: ");//Change owed is in dollars.
    }
    while (owed < 0);//Do above while input is less than 1

    cash = round(owed * 100);//Convert user's input from dollars to cents


    while(cash >= quarter)//While user's input (cash) is greater than a quarter
    {
        cash = cash - quarter;//At each loop this is true, minus quarter from cash
        add = add + 1;//Each time true, increment 'add' by one
    }

    while (cash >= dime)//Now check it's greater than a dime and repeat as before
    {
        cash = cash - dime;
        add = add + 1;//Again, each time true, increment add by 1, counting up the coins as you go along
    }

    while (cash >= nickle)//Same as above for nickle's
    {
        cash = cash - nickle;
        add = add + 1;
    }

    while (cash >= penny)//Check for pennies now
    {
        cash = cash - penny;
        add = add + 1;
    }
    printf("%i\n", add);//Print out change owed and correct number of coins required


}


