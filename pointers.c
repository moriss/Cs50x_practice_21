

//1. declare and print an int variable
//2. print the address of the variable
//3. De-reference the variable and print out the result
//4. declare and print a pointer variable
//5. de-reference the pointer variable

//print out the value at the address the pointer variable is pointing to
int main(void)
{
    int a = 5;//variable
    int *b = &a;//poniter variable
    
    printf("%i \n", a);//read a
    printf("%p \n", &a);//read address of a
    printf("%i \n", *&a);//de-reference a
    
    printf("%p \n", b);//read pointer variable 'b'
    printf("%i \n", *b);//de-reference the pointer variable
}

//More detail of what you can ad can't do (below)
int main(void)
{

   char *y = "Emma";
    
    printf("%c " ,*y);//Go to the address y is pointing to and print the value
    
    
   //moving through addresses and moving through values
   //Moving throught values
   printf("%c\n", y[0]);   printf("%c\n", y[1]);    printf("%c\n", y[2]);

   //Moving through addresses in sequence
   printf("%p\n", y); printf("%p\n", y+1); printf("%p\n", y+2);

   //Accessing the next value in logical sequence, NOT the value at the next address.
   //If value at zero is e, value at 1 is f  and so on...
   printf("%c %c %c\n", *y+1 ,*y+2 , *y+3);
   //This is differrent to bellow

   //Spot the difference! Using *brackets allows you to access the actual values in the string. MORE USEFUUL THAN ABOVE!
   printf("%c %c %c\n", *(y+1), *(y+2), *(y+3));
   //Even more important to note is that the use of the brackets is known as syntatic sugar.
   //It is effectively replacing the use of square brackets as below
   printf("%c %c %c\n " , y[0], y[1] ,y[2]);
    
}



