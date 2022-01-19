//There are three different kinds of loops

//1) while loop (infinte loop). Use when you want the loop to repeat an undefined number of times. (good for games)

while (true)
{
	excecute this
}
//NB if you get into an infinite loop, hit control.c to kill it
//Now //Create a simple while loop.
//1. Do same with your own function with both inputs and outputs
//2 This time with void input and output
//3 Finally with void input and void output

//Below is an example.
int main(void)
{
   int number = get_int("Your Chosen Number:  ");
   while (number != 8)
   {
      printf("Your number isn't 8, it is %i \n", number );
      number ++;
   }
}

//###################################

//2) do while loop. Use when you want it to run at least once. EG prompt the user for input.
do
{
	This
}
while (This is true)
//This will run at least once, then will check if true.
//Example below with own function, this time containg void input and output.
int main(void)
{
   my();
}
   void my(void)
   {
      char * name;
      do
      {
         name = get_string("Please enter your name, although it must begin with 'm' : ");
      }
   while (name[0] != 'm');
   printf("At last!, Your name begins with %c \n" , name[0]);
   }
######################
//STOPPED HERE
//C) A for loop. Used for repeating a discreet number of times. EG: You could ask the user for a number that will loop for that number of times

     start    expression  increment
for(int i = 0; i < 10;     i ++)
{
	do this
}
//################################################################
//LOOPS WITH STRINGS
//1. Create a do while loop
int main (void)
{
    char * fullname;//Declare the variable outside the 'do while'
    do
    {
        fullname = get_string("Enter your full name: ");
    }
    while (fullname[0] < 1 );//Keep asking until the first letter is at least a symbol and not empty.
}
//#############################################################
//Keep asking the user for their name until it begins with the letter 'm'
//Create a simple while loop, This time with void input and an output
int my();//Protoptype
int main (void)//C's main function
{
    my();//Run your function below without any input
}
    int my()//Start of your function
    {
        char * initial;//Declare a 'string' variable
        do//do below until the while is no longer satisfied
        {
            initial = get_string ("your name please: ");//As user for a name
        }
        while (initial[0] != 109);//keep looping while first letter is not 109 ('m')
        return false;/*Return false is simply returning a value to satisfy an (int)
        output requirement */
    }
/* Here, integers are being used to identify letters on the assci table. 109 
represents the letter 'm'. This allows us to test for the letter 'm' at the 
beginning of a name. The loop keeps asking the user for a name until the name
begins with the letter 'm'.






//##########################################################

//LOOPS WITH INTEGERS
//1. Create a for loop with integers as the data type.

int main (void)
{
   int x = get_int("enter a number: ");
   
   for (int i = 0; i < x; i ++)//Set 'i' to zero, stop the loop before value of x and incrimment by 1
   {
           printf("#");
   }
}
//i starts at zero because the first integer of x starts at zero, therefor the last integer is at x - 1.
//###########################################################
stopped here
//LOOPS WITH INTEGERS
//Now with your own program
void my(int x);
int main (void)
{
   int number = get_int("enter a number: ");
   my(number);//'my' function takes 'number' as input
}

   void my(int x)//This takes input but no output
   {
       for (int i = 0; i < x; i ++)
        {
           printf("# ");
        }
   }
//############################################################## 


//##############################################################
//1. Ittirate through LETTERS printing them one at a time. Use the strlen function.

int main (void)
{
   char * name = get_string ("Enter a string: ");
   int n = strlen(name);//Declare a string length variable
   for(int i = 0; i < n; i ++)//Stop when i is less than 'n'.
   {
      printf("%c ", name[i]);//Print out the i'ths of name.
   }
}
//###############################################################
//2. Do the same but with your own function
void my(char * x);
int main (void)
{
   char * name = get_string ("Enter a string: ");
   my(name);//Pass the 'name' variable into the 'my' function.
}  
   
void my(char * x)
{
      int n = strlen(x);
      for(int i = 0; i < n; i ++)
      {
         printf("%c ", x[i]);
      }
}
//##########################################################
//2. This time without the strlen function
void my(char * x);
int main (void)
{
   char * name = get_string ("Enter a string: ");
   my(name);
}  
   
void my(char * x)
{
      
      for(int i = 0;  x[i] != '\0'; i ++)//stop when you reach the null treminating character '\0'.
      {
         printf("%c ", x[i]);
      }
}

//########################################################
//Create a simple while loop
int main (void)
{
   int i = 0;
   while(i < 10)//Do something while 'i' is less that 10.
   {
      printf("%i " , i);//Print this if true
      i ++;//Incrememt i by one
      sleep(1);//Pause for one second. (Looks cool).
   }
}  
//##########################################
//Create a simple while loop with your own function having both input and output
int my(long into);
int main (void)
{
    long junu = get_long("number");
    my(junu);
}
    int my(long into)
    {
        while (into !=0 )
        {
            into = into / 10;
        }
    printf("%li  ", into);
    return 0;
    }

//###############################
//Create a simple while loop, This time with void input and void output
void my(long into);
int main (void)
{
    my();
}
    void my(long into)
    {
        into = get_long("number");
        while (into !=0 )
        {
            into = into / 10;
        }
    printf("%li  ", into);
    }

