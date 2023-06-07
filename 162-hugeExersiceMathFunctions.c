#include <stdio.h>

typedef struct rational{
    int numerator;
    int denominator;
} rational;

void increment(rational *r) // r1++;
{
    (*r).numerator=(*r).numerator+(*r).denominator;
}

void decrement(rational *r) // r1--;
{
    (*r).numerator=(*r).numerator-(*r).denominator;
}

rational addition(rational r1 , rational r2)
{
    rational r3;
    r3.denominator=r1.denominator*r2.denominator;
    r3.numerator=(r1.numerator*r2.denominator)+(r1.denominator*r2.numerator);
    return r3;
}

rational subtraction(rational r1 , rational r2)
{
    rational r3;
    r3.denominator=r1.denominator*r2.denominator;
    r3.numerator=(r1.numerator*r2.denominator)-(r1.denominator*r2.numerator);
    return r3;
}

rational multiplication(rational r1 , rational r2)
{
    rational r3;
    r3.numerator=r1.numerator*r2.numerator;
    r3.denominator=r1.denominator*r2.denominator;
    return r3;
}

rational division(rational r1 , rational r2)
{
    rational r3;
    r3.numerator=r1.numerator*r2.denominator;
    r3.denominator=r2.numerator*r1.denominator;
    return r3;
}

int smallerBiggerEqual(rational r1 , rational r2)
{
    if (((double)r1.numerator/(double)r1.denominator)<((double)r2.numerator/(double)r2.denominator))
        return -1;
    else if (((double)r1.numerator/(double)r1.denominator)>((double)r2.numerator/(double)r2.denominator))
        return 1;
    else
        return 0;
}

void notEqual(rational r1 , rational r2)
{
    if (((double)r1.numerator/r1.denominator)!=((double)r2.numerator/r2.denominator))
        printf("r1 and r2 not equal\n");
}

int main()
{
    rational r1= {2,3} , r2= {2,3};
    rational r3;

    /*printf("r1 before increment: ");
    printf("%d/%d\n" ,r1.numerator,r1.denominator);
    decrement(&r1);
    printf("r1 after increment: ");
    printf("%d/%d\n" ,r1.numerator,r1.denominator); */

    /*printf("r1 is %d/%d and r2 is %d/%d\n" ,r1.numerator,r1.denominator,r2.numerator,r2.denominator);
    r3=division(r1,r2);
    printf("the addition of r1 and r2 is %d/%d\n" ,r3.numerator,r3.denominator); */

    if (smallerBiggerEqual(r1,r2)==-1)
        printf("r1 is smaller than r2\n");
    else if (smallerBiggerEqual(r1,r2)==1)
        printf("r1 is bigger than r2\n");
    else 
        printf("r1 and r2 is equal\n");
    printf("\n");
    notEqual(r1,r2);

    return 0;
}