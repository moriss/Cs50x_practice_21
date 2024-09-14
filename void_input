#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Write a function as a 'void foo(void)'
void my(void);

int main (void)
{
    my();//Running this function in main requires no input
}

void my(void)//Since nothing is being returned, we have 'void' here as output.
{
    int voidfunction = get_int("Insert a positive number: ");//Within your own funcion, prompt user for a positive number.
    if(voidfunction <= 0)//Set the positive number condition
    {
        printf("%i is not a positive number " , voidfunction);//Onscreen display if number is positive.
    }
    else {
        printf("%i is a positive number "  , voidfunction);//Onscreen display if number is negative.
    }
}

//I may have not described this accurately. The main purpose of this is to show and example of how you can have a 'void foo(void)' function.

//#############################################################


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Write a function as a 'void foo(int)'
void my(int x);

int main (void)
{
    int voidfunction = get_int("Insert a positive number: ");
    my(voidfunction);//Your input here is voidfunction.
}

void my(int x)//Since nothing is being returned, we have 'void' here as output.
{
    if(x > 0)//Set the positive number condition
    {
        printf("%i is a positive number " , x);//Onscreen display if number is positive.

    }
    else
    {
        printf("%i is a not positive number "  , x);//Onscreen display if number is negative.
    }
}
//I may have not described this accurately. The main purpose of this is to show a way to have an 'void foo(int)' function.

//###########################################################


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Write a function as an int foo(void)
int my(void);

int main (void)
{
    my();
}

int my(void)//Since nothing is being returned, we have 'void' here as output.
{
    int x = get_int("ENter a number: ");
    if(x > 0)//Set the positive number condition
    {
        printf("%i is a positive number " , x);//Onscreen display if number is positive.
        return 0;
    }
    
        printf("%i is a not positive number "  , x);//Onscreen display if number is negative.
        return 1;
}

//I may have not described this accurately. The main purpose of this is to show a way to have an 'int foo(void)' function.







