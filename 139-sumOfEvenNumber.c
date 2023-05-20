#include <stdio.h>

int sumOfEvenNumber()
{
    int num;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    if (num==-1)
        return 0;
    else if (num%2==0)
        return num+sumOfEvenNumber();
    return sumOfEvenNumber();
}

int main()
{
    printf("%d\n" ,sumOfEvenNumber());
    return 0;
}