#include <stdio.h>

int ascendingOrDescening(int num)
{
    if (num<100)
        if (num%10>num/10%10)
            return 1;
        else if (num%10<num/10%10)
            return -1;
    if(ascendingOrDescening(num/10)==1 && num%10>num/10%10)
        return 1;
    else if (ascendingOrDescening(num/10)==-1 && num%10<num/10%10)
        return -1;
    return 0;
    
}

int main()
{
    int number;
    printf("Enter a value: ");
    scanf ("%d" ,&number);

    printf("%d" ,ascendingOrDescening(number));
    return 0;
}