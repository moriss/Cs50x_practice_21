

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
    
   //moving through variable's addresses, moving through values in logical sequence(abc...) and moving through variable's chars.
   
    //moving through variable's chars.
   printf("%c\n", y[0]);   printf("%c\n", y[1]);    printf("%c\n", y[2]);

   //moving through variable's addresses
   printf("%p\n", y); printf("%p\n", y+1); printf("%p\n", y+2);

   //Accessing the next value in logical sequence, NOT the value at the next address.
   //If value at zero is e, value at 1 is f  and so on...
   printf("%c\n", *y+1);   printf("%c\n", *y+2);   printf("%c\n", *y+3);
   
   
   //Spot the difference! Using *brackets allows you to access the actual values in the string. MORE USEFUUL THAN ABOVE!
   printf("%c\n", *(y+1));   printf("%c\n", *(y+2));   printf("%c\n", *(y+3));


   printf("%p \n", &y);//Address where y is located
   printf("%p \n", y);//Value of y.(Address of first character)
   printf("%c \n", *y);//This goes to address (stored in y) and prints the value at that address [1st letter 'E']
   
   printf("%c \n", y[1]);//This works for accessing value at second position.
   printf("%c \n", y+1);//!!ACCESSING VALUE WITH +1 DOES NOT WORK IN THIS WAY. SEE NEXT ONE DOWN FOR CORRECTION
   printf("%c \n", *y+1);//3. YOU NEED TO USE * TO 'GO TO' y, TO THEN ACCESS WHAT IS AT THE SECOND BYTE.
   printf("%p \n", y+1);//4.  This however works for accessing the address at the second byte.
   printf("%p \n", y[1]);//!!ACCESSING ADDRESS WITH [1] DOES NOT WORK.
   printf("%p \n", *y[1]);//!!THIS DOES NOT WORK EITHER.
    
    //Best way to remember abstractly is:
    //With values AND  addresses, of first byte, both can be accessed with 
    //With (only) values, * and + work together fine. 3.
    //Without the '*', you must resort to only accessing the address with '+'. 4.
    
}



