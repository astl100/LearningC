//define structure complex-->COMPLEX
typedef struct complex
{
        long double x;
        long double y;
} COMPLEX;

//function definitions
COMPLEX mult2(const COMPLEX *, const COMPLEX *);
COMPLEX square(const COMPLEX *);
COMPLEX add2(const COMPLEX *, const COMPLEX *);
COMPLEX juliamap(const COMPLEX *, const COMPLEX *);
char * complex_print(const COMPLEX z);
char * test(const COMPLEX *a, const COMPLEX *b);
