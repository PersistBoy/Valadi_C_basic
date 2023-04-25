#include <stdio.h>

int main()
{
    int a,b,c; //531
    int max,min;
    printf("Enter 3 number\n");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    scanf("%d" ,&c);
    
    max=a;
    min=b;

    if (a<b)
    {
        max=b;
        min=a;
    }
    if (max<c) 
        max=c;
    if(c<min)
    min=c;
    
    printf("the max is %d and min is %d \n" , max,min);
    return 0;
    
}