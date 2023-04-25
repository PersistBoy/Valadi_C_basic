#include <stdio.h>

int sequenceOfnum(int length)
{
    int i;
    int sum=0,factorOfTen=1,resault;

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
            sum=sum+(9*factorOfTen);
            factorOfTen=factorOfTen*10;
        }
        return sum;
    }

}

int main()
{
    int lengthValue;

    printf("enter a num: ");
    scanf("%d" ,&lengthValue);

    printf("%d\n" ,sequenceOfnum(lengthValue));
    return 0;
}