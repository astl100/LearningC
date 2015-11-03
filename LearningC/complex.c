#include <stdio.h>

typedef struct
{
	int x;
    int y;
}complex; 

int main() 
{
    complex a, b, c, z; 
    
    /*a = a.x + a.y;
    b = b.x + b.y;
    c = c.x + c.y;
    z = z.x + z.y;*/
    
    return 0;
}
    
const complex mult2(a, b)
    {
        c.x = a.x*b.x - a.y*b.y;
      	c.y = a.x*b.x + a.x*b.y;
    	return c;
    }
    
const complex square(a)
    {
        b.x = a.x*a.x + a.y*a.y*(-1);
      	b.y = a.x*a.y;
    	return b;
    }

const complex add2(a, b)
    {
    	c.x = a.x + b.x;
        c.y = a.y + b.y;
    	return c;
    }
	
const complex juliamap(c, z)
    {
    	b = add2(square(z), c);
    	return b;
    }

const char * complex_print(z)
	{
    	return ("z = %d + %d i \n", z.x, z.y);
	}