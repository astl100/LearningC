#include <stdio.h>
struct complex mult2(struct complex a, struct complex b);
struct complex square(struct complex a);
struct complex add2(struct complex a, struct complex b);
void complex_print(struct complex z);
int test();

struct complex
{
	float x;
    float y;
}; 

int main() 
{
    test(); 
    
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
    	return c;
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

void complex_print(struct complex z)
	{
    	printf ("z = %f + %f i \n", z.x, z.y);
	}


int test()
    {
        struct complex a, b, c, z; 
        a.x = 0.0;
        a.y = 0.0;
        b.x = 1.0;
        b.y = 1.0;
        
        printf ("The square of a complex structure: ");
        complex_print(square(a));
        
        printf ("Product of two complex numbers: ");
        mult2(a,b);
        
        printf ("Complex number representing a^2 + b: ", juliamap(a, b));
        juliamap(a,b);
        
    	return 0;
    }