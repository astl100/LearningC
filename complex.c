#include <stdio.h>

//define structure complex-->COMPLEX
typedef struct complex
{
        long double x;
        long double y;
} COMPLEX;

//function definitions
COMPLEX mult2(COMPLEX a, COMPLEX b);
COMPLEX square(COMPLEX a);
COMPLEX add2(COMPLEX a, COMPLEX b);
COMPLEX juliamap(COMPLEX c, COMPLEX z);
char * complex_print(COMPLEX z);
char * test(COMPLEX a, COMPLEX b);

//functions
COMPLEX setting(long double x, long double y)
{
	COMPLEX a;
	a.x = x;
	a.y = y;
	return a;
}
 

int main() 
{
    COMPLEX a, b; 
	a.x = 1; a.y = 1;
	b.x = 1; b.y = 2;

	char * l;
	l = test(a, b);
    
    /*a = a.x + a.y;
    b = b.x + b.y;
    c = c.x + c.y;
    z = z.x + z.y;*/
    
    return 0;
}
    
COMPLEX mult2(COMPLEX a, COMPLEX b)
    {
        COMPLEX c;
        c.x = a.x*b.x - a.y*b.y;
      	c.y = a.x*b.x + a.x*b.y;
    	return (c);
    }
    
COMPLEX square(COMPLEX a)
    {
        COMPLEX b;
        b.x = a.x*a.x + a.y*a.y*(-1);
      	b.y = a.x*a.y;
    	return b;
    }

COMPLEX add2(COMPLEX a, COMPLEX b)
    {
        COMPLEX c;
    	c.x = a.x + b.x;
        c.y = a.y + b.y;
    	return c;
    }
	
COMPLEX juliamap(COMPLEX c, COMPLEX z)
    {
        COMPLEX b;
    	b = add2(square(z), c);
    	return b;
    }

char * complex_print(COMPLEX z)
	{
    	printf ("z = %f + %f i \n", z.x, z.y);
    	return 0;
	}

char * test(COMPLEX a, COMPLEX b)
{
	printf("Initial Complex 1: ");
	complex_print(a);
	printf("\nInitial Complex 2: ");
        complex_print(b);


	COMPLEX c;
	c = mult2(a, b);
	printf("\nMultiply: ");
	complex_print(c);

	
	COMPLEX d;
	d = square(a);
	printf ("\nSquare: ");
	complex_print(d);

	COMPLEX f;
	f = add2(a, b);
	printf ("\nAddition: ");
	complex_print(f);

	COMPLEX e;
	e = juliamap(a, b);
	printf ("\nJuliamap: ");
	complex_print(e);

}
