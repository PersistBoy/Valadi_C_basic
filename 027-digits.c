#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a Number:");
    scanf("%d" ,&num);

    if (num>=10 && num<100)
        printf("the number is a 2-digit\n");
    else if (num>=100 && num<1000)
        printf("the number is a 3-digit\n");
    else
        printf("the number is not a 2-digit or 3-digit number\n");
    return 0;
}