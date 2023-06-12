#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int thrownTimes;
    int i;
    int j;
    int nums[6] = {0};
    int randomNumber;

    srand(time(0));

    randomNumber=(rand() %6) + 1;
    
    printf("%d\n" ,randomNumber);
    return 0;
}