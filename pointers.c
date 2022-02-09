

//1. print out the address of a value
//2. Return to printing out the value at a memory location using the * function
//3. create a pointer variable and print out the pointer variable's value (an address)
//4. Now print out the value at the location the pointer variable is pointing to
//5.print out the pointer variable's address location

//print out the value at the address the pointer variable is pointing to
int main(void)
{
    int g = 5;
    int *p = &g;
    printf("%p \n", &g);//1. Address of a value
    printf("%i \n" , *&g);//2. The value at a memory location being pointed to
    printf("%p \n", p);// 3.
    printf("%i \n" , *p);//4.
    printf("%p \n", &p);//5. Address the p pointer variable is located
}
/*
int n = 6; n is the lable, 6 is the value, so two items here. key value pairs perhaps
    int *p = &n ;//pointer variables. Its' value is an address
    printf("%p \n ", p);//so print out the contents of a pointer variable. which holds a location value
}
*/
//so, two items here. Lable and value
//so currently, the lable is the pointer
