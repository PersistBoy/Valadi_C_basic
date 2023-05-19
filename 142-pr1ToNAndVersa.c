#include <stdio.h>

int function(int num)
{
    if (num==1)
        printf("%d " ,num);
    if (num>1)
    {
        printf("%d ",num);
        function(num-1); 
        printf("%d " ,num);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    function(number);
    return 0;
}