//From the comand line

//make <filename>
//valgrind ./<filename>



//Using help50 to highlight issues amongst all the data that valgrind spits out.

//make <filename>
//help50 valgrind ./<filename>

//Solution
//free(variable name where malloc was allocated) at end of program, frees the memory to be used elsewhere when you are done with it. 

//Example below


int main (void)
{
  char *x = get_string("String: ");//Declare a pointer variable.
  char *y = malloc(strlen(x)+1);//Allocate memory at a different location to copy x.plus 1 is to allow for the terminating character
  
  int n = strlen(x);//Declare a variable to store the string length of x.
  for(int i = 0; i <= n; i ++)//Create a for loop, stopping equal to x, to allow for the null terminating character to be copied. 
  {
    y[i] = x[i];//copy over each i'th (char) from x into y including the null terminating character
  }
  x[0 ]= toupper(x[0]);//Change x's zero i'th to uppercase to prove that y is a copy.
  printf("%s\n %s\n", y, x);
  free (y);//This then frees the space allocation you created so it can be re-used when you are done with it. 
}

