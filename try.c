#include<stdio.h>
#include<cs50.h>
//Test if a user's name begins with 'm' (A function with basic return output

char my(char*);
int main()
{
	char* names=get_string("Your name please ");
	my(names);
}


char my(char* name)
{
	if(name[0] == 'M')
	{
		printf("Your name begins with %c \n ", name[0]);
	}
	else
	{
		printf("Sorry, your name begins with %c \n ", name[0]);
	}
return 0;
}
