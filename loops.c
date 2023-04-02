//There are three different kinds of loops

// 1) while loop (infinte loop). 
//Use when you want the loop to repeat an undefined number of times. (good for games)

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
   int number = get_int("Your Chosen Number:  ");//Prompt user for a number
   while (number != 8)//Set the condition to perform the action below while number is NOT 8
   {
      printf("Your number isn't 8, it is %i \n", number );//Keep printing this out until your number becomes 8
      number ++;//Incermenting your number will eventually bring it up to 8
   }
}
//Warning! there are safer ways to write this code. If you print a number over 8 then the program will keep printing endlessly as your number 
//moves further away from 8. Remember to ctrl > c  to kill your program if it runs out of control. 
//Try and think of a better way to write this program.
//###################################




// 1. while loop
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










check back
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
//##################################











// 2) do while loop. 
//Use when you want it to run at least once. EG prompt the user for input.
//A do while loop checks the condition lastly. In other words, the boolean expression is at the bottom.

do
{
	This
}
while (This is true)
//This will run at least once, then will check if true.
	
//Example below with your own function, this time containg void input and void output (Just for practice).
int main(void)
{
   my();//Run the program
}
   void my(void)//No inputs or outputs in my function
   {
      char * name;//Create a string variable
      do
      {
         name = get_string("Please enter your name, although it must begin with 'm' : ");//Prompt user for a name (string)
      }
   while (name[0] != 'm');//While the first letter of the string isn't 'm', keep prompting user again and again until...
   printf("At last!, Your name begins with %c \n" , name[0]);//Print this to screen. The sentence and the first letter of string ('m' of course!)
   }
//Another way of doing it below.
// 2 This time with void input and an output
int my();//Protoptype
int main (void)//C's main function
{
    my();//Run your function below without void input (just for practice)
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
begins with the letter 'm'.*/
//##########################################################









// 3) A for loop. 
//Used for repeating a discreet number of times. EG: You could ask the user for a number that will loop for that number of times

     start    expression  increment
for(int i = 0; i < 10;     i ++)
{
	do this
}
//Example below.
int main(void)
{
   int num = get_int("Enter Number :");//prompt user for a number
   for(int i = 0; i <= num; i ++)//Set i to zero, make it smaller or equal to num, increment by 1 each time it loops
   {
      printf("Hello %i of %i \n", i,num);//Print out the result at each loop cycle and number its position.
   }
}
//################################################################







// 3 for loops
//Create a for loop with integers as the data type, using your own function.
//Test whether the user's input has or hasn't included a space
Here we go!
void my (char * x );//Funcion prototype
int main(void)
{
   char * name = get_string("Enter your first name without any spaces; ");//Prompt string from user
   my(name);//pass user's string into the function (below)
}
   void my (char * x )//my function
   {
      for(int i = 0; i < strlen(x); i ++ )//Set up a for loop to test each character
      {
         if(x[i] == 32)//Test if any character is number 32 (ascii digital representation of a space)
         {
            printf("Please do not enter a space in your string here: at position %i  \n", i + 1);//Print to screen if space used including position number
         }
      else
         {
            printf("Thank you, This character is valid =  %c  \n ", x[i] );//Print to screen if space not used
         }//Note that you are including the positon number of each space character using i + 1 (Starting 1 instead of zero)
      }
   }
//###########################################################








//3. Ittirate through LETTERS printing them one at a time. Use the strlen function.

int main (void)
{
   char * name = get_string ("Enter a string: ");//Prompt user for a string (their name)
   int n = strlen(name);//Declare a string length variable
   for(int i = 0; i < n; i ++)//Set i to zero, have it less than name's length, increment 1 every loop.
   {
      printf("%c ", name[i]);//Print out the i'ths of name, which prints out the individual characters one at a time.
   }
}
//###############################################################









//3. Do the same but with your own function
void my(char * name);//Prototype at top of page
int main(void)
{
   char * names = get_string("name: ");//Prompt user for a name
   my(names);//Pass your 'names'  variable into your own function (named 'my')
}
   
   void my(char * name)
   {
      printf("hello ");//Print "hello" to the screen in preperation to greet person.
      int n = strlen(name);//Create variable 'n', storing string lenth of 'name' in it.
      for(int i = 0; i < n; i ++)//Set i to zero, and to be same length as string , and to incriment by 1 for each revolution.
      {
      printf("%c ", name[i]);//print out individual characters as you loop through each one.
      }
   }
   
//##########################################################










//3. This time without the strlen function
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
