#include <stdio.h>

int main()
{
    int i,num,EvenNum=0;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    for (i=1 ; i<=num ; i++)
    {
        EvenNum=EvenNum+2;
        printf("%d\n" ,EvenNum);
    }
    return 0;
}