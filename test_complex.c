#include <stdio.h>
#include "complex.h"

int main(void)
{
    COMPLEX a, b;
        a.x = 7.974835723; 
	a.y = 1.483597394;
        b.x = 5.489562349; 
	b.y = 2.765736783;

        char * l;
        l = test(&a, &b);

	/*    a = a.x + a.y;
  	*     b = b.x + b.y;*/

    return 0;
}

