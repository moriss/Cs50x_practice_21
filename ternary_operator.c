######################################
? :  = the terinary operator
(question mark then colon)
normally used as a trick which simulates a simple if/else

here it is!

int x = (x < 3)  ? 5 : 6;
so it's 5, if the experession is true and 6 if the expression is false.


ANd example is below
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(void)
{
 int x = 5;
 x = (x < 3)  ? 5 : 6;
 printf("%i",x);
}

//#####################################################
#include <cs50.h> //Switch
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//1. Create a scenario where you would use the ternary operator.
//2. Now create your own program to do the same with void intputs and void outputs.
//3. Now with a void output but an input.
void my(int x);
int main (void)
{
    int nmber = get_int ("Enter a number: ");//Take user input
    my(nmber);
}    
    
    void my(int x)
    {
    
    x = (x < 5)  ?  5 : 6; //Declare that 'x' is less than 5. If true, x is 5, else, x is 6
    printf("%i\n", x);

    }
//###############################################################
#include <cs50.h> //Switch
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//1. Create a scenario where you would use the ternary operator.
//2. Now create your own program to do the same with void intputs and void outputs.
//3. Now with a void output but an input.
//4. Now with an input and and output.
int my(int x);
int main (void)
{
    int nmber = get_int ("Enter a number: ");//Take user input
    my(nmber);
}    
    
    int my(int x)
    {
    
    x = (x < 5)  ?  5 : 6; //Declare that 'x' is less than 5. If true, x is 5, else, x is 6
    printf("%i\n", x);
    return 0;
    }