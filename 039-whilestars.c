#include <stdio.h>

int main()
{
    int StarsNum,CurentStars=1;

    printf("Enter a number of stars: ");
    scanf("%d" ,&StarsNum);

    while (CurentStars<=StarsNum)
    {
        printf("*");
        CurentStars=CurentStars+1;
    }
        printf("\n");
    return 0;
}