#include <stdio.h>
#include <math.h>

int main()
{
    int num,powerof;

    printf("tell me a num: ");
    scanf("%d" ,&num);

    printf("tell me the power of: ");
    scanf("%d" ,&powerof);

    printf("the reasult is %d\n" ,num^powerof);
    return 0;
}