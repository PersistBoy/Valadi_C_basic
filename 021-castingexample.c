#include <stdio.h>

int main()
{
    int NUM1,NUM2,NUM3;
    double Average;
    printf("NUM1: ");
    scanf("%d" ,&NUM1);
    printf("NUM2: ");
    scanf("%d" ,&NUM2);
    printf("NUM3: ");
    scanf("%d" ,&NUM3);
    Average=(NUM1+NUM2+NUM3)/3.0; // mitoonim be jaye (double) ghabl az NUM ha .0 bad az 3 bezarim ta natije floating beshe.
    printf("The average: %.2lf \n" ,Average);
    return 0;

}