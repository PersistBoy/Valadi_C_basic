#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d" ,&num);

    if (num%2==0)
        printf("%d = even\n" ,num);
    else
        printf("%d = odd\n" ,num);
        return 0;

}