//operators

//i ++  is same as i = i + 1 (increments by 1 each cycle of the loop)
//i --	is same as i = i - 1  (decrements by 1 each cycle of the loop)

//x *= 5  is the same as x = x * 5 (multiplication)


//boolean --> any positive numbers return true. only 0 returns false
		  
//##################################	  
//logical '&&' operators
// a && b
//Both a and b need to be true

//Example
int my(int x);//prototype
int main(void)
{
    int four = get_int("Number: ");//prompt user for input
    my(four);//run user input into your program
}

int my(int x)
{
    if(x < 5 && x > 3 )//test that user input needs tobe less than 5 and above 3 (ie 4)
    {
        printf("Well done, you have a number %i ", x);//Print to screen if true
        return 0;//conventinal output when true
    }
    printf("Sorry, you are way off");//print to screen if false
    return 1;//conventinal output when false
}




//##################################
//logical || 'or' operators 
// a || b
//requires only one to be true

//Example
//operators_reference.c
//Example with the and operator
int my(int x);
int main(void)
{
    int four = get_int("Number: ");
    my(four);
}

int my(int x)
{
    if(x == 5 || x == 3 )
    {
        printf("Well done, you have a number %i ", x);
        return 0;
    }
    printf("Sorry, you are way off");
    return 1;
}
//##################################

//The not operator 
// a != b
//'a' is not equal to 'b'
//'!' reverses the state. It changes true to false and vice versa
//Also refered to as bang and not
//######################################



//####################################
//Relational operators

// x < y    --> 'x' is less than 'y'

// x > Y   -->  'x' is greater than 'y'

// x <= y   --> 'x' is less than or equal to 'y'
// x >= y   --> 'x' is greater than or equal to 'y'

// x == y   : Equality. x is same as y
// x != y   : Inequality x is not the same as y


