#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
//Have someone type a command line argument.
//Add an if else statement to test if 1 argument has been printed.
//print "true" if true and "false" if false.

int main(int argc, string argv[])
{
	if(argc == 2)//Check this condition
	{
		printf("True");//If true, print this
	}
	else
	{
		printf("False");//if false, print this
	}
}

//MORE EXPLANATIONS BELOW
//string argv[] is an array of strings

//These two special arguments enable you to know what data the user provided at the command line and how much data they provided.

//argc stands for argument count. This interger type variable will store the number of command line arguments the user typed when the program was executed. 

//They are named by convention so can be changed. 
//c stands for count and v stands for vector.

//argc starts counting at the name of the file. So the first useful string typed by the user will be counted as the second.

//./greedy  = Is number one in argc.
//.greedy 1024 cs50  = Is number three in argc.

//argv: v means "vector" which is just another word for an array.
//This array of strings stores one string per element: the actual strings the user types at the command line when the program is executed.


//So:
//The fist element of argv is always found at argv[0]. Basically becuase computers start counting from  zero so it's best to stick with this convention.
//The last element of argv is always found at argv[argc -1].
//This accounts for the computer starting to index arrays at zero but argc starting at number 1 for the first element when counting user input.

//User input : 
//./greedy 1024 cs50 x
argv[0]     //./greedy
argv[1]    // 1024
argv[2]    // cs50
argv[3]    // x

//Everything in string argv is stored as a string so 1024 above is always going to be a string. Never a number.


//When you write a program in C and you specify one or more words after ./filename, you are handed back these words in an array called argv and you are told how many you typed in argc. This is similar in spirit to help50, style50 etc. The program looks for words typed after the program's name.

//int main(void)= I don't want any comand line arguments
//int main(int argc, string argv[])I DO want the user to input something