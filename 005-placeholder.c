#include <stdio.h>

int main()
{
    printf("i want to buy a dol for %d$\nis that too much?\n",800); //a normal placeholder
    printf("when i buy ghost recon wildland . its on off . and i pay %.1f$ for that i think\n",53.5); //its a floating number with %.1f
    printf("NUM1: %d NUM2: %d SUM: %d\n" ,5 ,6 ,5+6); // in this one i got it 5+6 show me 11 in final 
    printf("NUM1: %f NUM2: %f SUM: %f\n" ,52.3 ,46.5 ,52.3+46.5); //its show 25.300000 replaced with %f
    printf("NUM1: %.1f NUM2: %.1f SUM: %.1f\n" ,52.3 ,46.5 ,52.3+46.5); // exact same code but we havent 00000
    printf("a = %d, b = %d, sum = a+b = %d\n" ,3 ,5 ,3+5);
    printf("a=%d b=%.1f c=%.2f SUM = a+b+c = %d+%.1f+%.2f = %.2f and sub = a-b-c = %d-%.1f-%.2f = %.2f\n" ,5 ,3.2 ,8.33 ,5 ,3.2 ,8.33 ,5+3.2+8.33 ,5 ,3.2 ,8.33 ,5-3.2-8.33);
        return 0;
}