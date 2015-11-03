#include <stdio.h>

struct complex
{
	float x;
    float y;
}; 

float main() 
{
    struct complex a, b, c, z; 
    
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

const char* complex_print(struct complex z)
	{
    	return ("z = %d + %d i \n", z.x, z.y);
	}