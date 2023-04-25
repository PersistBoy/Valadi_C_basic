#include <stdio.h>

int sequenceOfnum(int length)
{
    int i,sum=0,factorOfTen=1,resault;

    if (length<10)
    {
        for (i=(length+1) ; i>=2 ; i--)
        {
            resault=(i-1)*factorOfTen;
            sum=resault+sum;
            factorOfTen=factorOfTen*10;
        }
        return sum;
    }
    else if (length>=10)
    {
        for (i=1 ; i<=length ; i++)
        {
            printf("9");
        }
        printf("\n");
        return -1;
    }   

}

int main()
{
    int lengthValue;

    printf("enter a num: ");
    scanf("%d" ,&lengthValue);

    if (sequenceOfnum(lengthValue)!=-1)
        printf("%d\n" ,sequenceOfnum(lengthValue));
    return 0;
}