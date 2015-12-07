#include <stdio.h>

int main() 
{
    double fib[100];
	/*Changing the type of the values to something
 * 	other than an int provides more precision, and
 * 	in turn the negatives are not a concern because
 * 	they are no longer there.
 * 	Changing the declared type of the fib value and
 * 	the print statement to %f and instert a float 
 * 	rather than an int takes care of the alterations*/

    int i;

    for (i=0; i<100; i++)
    {
        if (i < 2)
        {
            fib[i] = 1;
        }
        else
        {
        fib[i] = fib[i-1] + fib[i-2];
        }
      printf("%f\n", fib[i]);
    }
      
  return 0;
}
