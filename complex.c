#include <stdio.h>
struct complex mult2(struct complex a, struct complex b);
struct complex square(struct complex a);
struct complex add2(struct complex a, struct complex b);
struct complex juliamap(struct complex c, struct complex z);
char * complex_print(struct complex z);
char * test(struct complex a, struct complex b);


struct complex
{
	long double x;
    	long double y;
}; 

int main() 
{
    struct complex a, b; 
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
    
struct complex mult2(struct complex a, struct complex b)
    {
        struct complex c;
        c.x = a.x*b.x - a.y*b.y;
      	c.y = a.x*b.x + a.x*b.y;
    	return (c);
    }
    
struct complex square(struct complex a)
    {
        struct complex b;
        b.x = a.x*a.x + a.y*a.y*(-1);
      	b.y = a.x*a.y;
    	return b;
    }

struct complex add2(struct complex a, struct complex b)
    {
        struct complex c;
    	c.x = a.x + b.x;
        c.y = a.y + b.y;
    	return c;
    }
	
struct complex juliamap(struct complex c, struct complex z)
    {
        struct complex b;
    	b = add2(square(z), c);
    	return b;
    }

char * complex_print(struct complex z)
	{
    	printf ("z = %f + %f i \n", z.x, z.y);
    	return 0;
	}

char * test(struct complex a, struct complex b)
{
	printf("Initial Complex 1: ");
	complex_print(a);
	printf("\nInitial Complex 2: ");
        complex_print(b);


	struct complex c;
	c = mult2(a, b);
	printf("\nMultiply: ");
	complex_print(c);

	
	struct complex d;
	d = square(a);
	printf ("\nSquare: ");
	complex_print(d);

	struct complex f;
	f = add2(a, b);
	printf ("\nAddition: ");
	complex_print(f);

	struct complex e;
	e = juliamap(a, b);
	printf ("\nJuliamap: ");
	complex_print(e);

}
