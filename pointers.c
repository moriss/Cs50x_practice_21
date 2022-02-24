

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



