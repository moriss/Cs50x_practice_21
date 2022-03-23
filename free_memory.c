//From the comand line

//make <filename>
//valgrind ./<filename>



//Using help50 to highlight issues amongst all the data that valgrind spits out.

//make <filename>
//help50 valgrind ./<filename>

//Solution
//free(variable name where malloc was allocated) at end of program, frees the memory

//Example below


int main (void)
{
  char *x = get_string("String: ");
  char *y = malloc(strlen(x)+1);//to allow for the terminating character
  //x[0] to toupper
  int n = strlen(x);
  for(int i = 0; i <= n; i ++)
  {
    y[i] = x[i];
  }
  x[0 ]= toupper(x[0]);
  printf("%s\n %s\n", y, x);
  free (y);
}

