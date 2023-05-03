#include <stdio.h>
#define size 4

int main()
{
    int primaryArr[size];
    int secondaryArr[size];
    int i;
    int numberOfRotate;

    //initialize primaryArr
    for(i=0 ; i<size ; i++)
    {
        printf("Enter number %d : " ,i+1);
        scanf("%d" ,&primaryArr[i]);
    }

    //giving numberOfRotate from user
    printf("good now take me the number of rotate you want: ");
    scanf("%d" ,&numberOfRotate);

    //initialize secondaryArr with primaryArr
    //part 1
    for(i=0 ; i<numberOfRotate ; i++)
    {
        secondaryArr[size-numberOfRotate+i]=primaryArr[i];
    }
    //part 2
    for(i=size-1 ; i>=numberOfRotate ; i--)
    {
        secondaryArr[i-numberOfRotate]=primaryArr[i];
    }

    //print value of secondaryArr
    for(i=0 ; i<size ; i++)
    {
        printf("%d " ,secondaryArr[i]);
    }
    printf("\n");
    return 0;
}