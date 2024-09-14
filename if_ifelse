#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//1. Create an if/else statement
int my(void);
int main (void)
{
    char * n = get_string("Name: ");//Get a string from the user
    if(n[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c" , n[0]);//print an aknowledgment to the screen.
    }
    else
    {
        printf("Your name doesn't begin with %c" , n[0]);//Otherwise, alert to the screen that it doesn't.
    }
    
}
//##############################################################
//2. Use your own function with input and output
char my(char * x);//Prototype goes here
int main (void)
{
    char * n = get_string("Name: ");//Get a string from the user
    my(n);//Pass 'n' from main into 'my' function
}

char my(char * x)//'my' function has input 'x' and void output
{
        if(x[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c" , x[0]);
        return 0;
    }
    else
    {
        printf("Your name doesn't begin with 'm'");
        return 1;
    }
}





//###############################################################
//2. Use your own function with void ouput
void my(char * x);//Prototype goes here
int main (void)
{
    char * n = get_string("Name: ");//Get a string from the user
    my(n);//Pass 'n' from main into 'my' function
}    
    
void my(char * x)//'my' function has input 'x' and void output
{
        if(x[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c" , x[0]);
    }
    else
    {
        printf("Your name doesn't begin with 'm'");
    }
}

//#############################################################
//3. Use your own function with void input.
int my(void);
int main (void)
{
    my();
}    
    
int my(void)
{
    char * x = get_string("Name: ");
        if(x[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c\n" , x[0]);//print an aknowledgment to the screen.
        return 0;
    }
    else
    {
        printf("Your name doesn't begin with 'm'\n");//Otherwise, alert to the screen that it doesn't.
        return 1;
    }
}
//#################################################################
//4. Use your own function with void output
void my(char * x);
int main (void)
{
    char * n = get_string("Name: ");
    my(n);
}    
void my(char * x)//Shows input but no output. (void output)
{
        if(x[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c\n" , x[0]);
    }
    else
    {
        printf("Your name doesn't begin with 'm'\n");
    }
}

//##########################################################
//5. Use your own function with void output and void input
void my(void);
int main (void)
{
    my();
}    
void my(void)//both input and output is void
{
        char * x = get_string("Name: ");
        if(x[0] == 'm')//if the first letter is m...
    {
        printf("Your name begins with %c\n" , x[0]);
    }
    else
    {
        printf("Your name doesn't begin with 'm'\n");
    }
}




//################################################################
conditionals
#########################
if (statments)
{
}
#########################


#########################
if (statments)
{
}
else
{
} 
########################

########################
All mutually exclusive

if (statments)
{
}
else if (statments)
{
} 
else if (statments)
{
} 
else
{
}
########################

#######################
NOT mutually exclusive
if (statments)
{
}

if (statments)
{
}

if (statments)
{
}

if (statments)
{
}

else
{
}

###############################
//special notes

//The else only binds to the nearest if. 
//So the last example means that it will satisfy else, when the last if condition is not met (but the other two are)
#####################################
