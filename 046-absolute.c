#include <stdio.h>

int main()
{
    int num;

    printf("enter any int number(- or +):");
    scanf("%d" ,&num);

    if (num>0)
        printf("The absolute of %d = |%d|\n" ,num,num);
    else
        printf("The absolute of %d = |%d|\n" ,num,num*(-1));
    return 0;
}