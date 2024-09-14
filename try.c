#include<stdio.h>
#include<cs50.h>
//Use ifelse function to test if user's name begins with 'm'. i/o if poss.

void myFunction(string j)
{
	char x = j[0];
	if(x == 'm')
		{
			printf("Great! your name begins with %c\n ", x);
		}
	else
		{
			printf("Opps! your name doesn't begin with 'm', it begins with  %c \n" , x );
		}
	
}

int main()
{
	char * w = get_string("What is your name? I hope it begins with 'm' ");

	myFunction(w);

}
