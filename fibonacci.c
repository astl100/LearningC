#include <stdio.h>

int main() 
{
    int fib[100];
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
      printf("%d\n", fib[i]);
    }
      
  return 0;
}
