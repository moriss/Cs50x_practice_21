#include <stdio.h>
//#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
// Ask someone their name and print it out using a function.
//ALLTHEWAZE
// 1.In main  2.As a function  3.no input/outpuT  #4.input  5.output  6.input/output 7. Save output as a variable

	int main(int argc, char* argv[])
{
	if (argc ==3)
	{
	int a = atoi(argv[1]) + atoi(argv[2]);
		printf("%i " , a);
	}
	else
	printf("You have no additional inputs after ./filename \n");
}

/*
void my() {
    char name[100]; // Assuming a maximum input length of 99 characters
    
    printf("What is your name? ");
    scanf("%99s", name); // Read at most 99 characters to prevent buffer overflow

    printf("Hello %s\n", name);
}

int main() {
    my();
    return 0;
}
*/


//  Absolute file path
	// /home/maurizio/Desktop/Cs50x_practice_21/AAtest.c
	
	// Terminal command 
	//  gcc -o AAtest /home/maurizio/Desktop/Cs50x_practice_21/AAtest.c -I../libcs50/src -L../libcs50 -lcs50ls
	
	
	//Then run ./AAtest
