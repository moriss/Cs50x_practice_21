#include<cs50.h>
#include<stdio.h>
#include <string.h>
//ittirate through the letters printing them one at a time
int main(void)
{
    char * name = get_string("what is your name? ");//Ask user their name

    int n = strlen(name);//Set up an int variable to store the length of the user's name.

    for(int f = 0; f < n; f ++)//loop through the characters in the user's name
    {
        printf("%c ", name[f]);//Print out each letter, one at a time, at every loop.
    }

}

//At printf, You are asking for an array of chars to be printed, one at a time as per for loop. 'f' points to each element in the array.
//So in first run of the loop, 'f' points to first memory location,  2nd run of the loop, 'f' now points to second location etc.
//##################################################


//##################################################

#include<cs50.h>
#include<stdio.h>
#include <string.h>
//Now with your own program
void my(char * x);//Prototype of your function below
int main(void)
{
    char * name = get_string("what is your name? ");//Ask user their name

    my(name);//Call your function below with 'name' as input

}

    void my(char * x)//Start of your function
    {

        for(int f = 0; f < strlen(x); f ++)//loop through the characters in the user's name
        {
            printf("%c ", x[f]);//Print out each letter, one at a time, at every loop.
        }
    }

//############################################################
#include<stdio.h>
#include <string.h>
//Now with the null terminating character
void my(char * x);//Prototype of your function below
int main(void)
{
    char * name = get_string("what is your name? ");//Ask user their name

    my(name);//Call your function below with 'name' as input
}

    void my(char * x)//Start of your function
    {
        for(int f = 0; x[f] != '\0'; f ++)
        {
            printf("%c ", x[f]);
        }
    }
//This tests whether any element in the string is a null terminating character. If yes, then the loop stops.
#########################################################

