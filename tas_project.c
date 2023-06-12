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

    printf("Enter a number of shooting cube: ");
    scanf ("%d" ,&thrownTimes);


    
    for (i=0 ; i<thrownTimes ; i++)
    {
        srand(time(0));
        randomNumber=(rand() %6) + 1;
        for (j=0 ; j<6 ; j++)
        {
            if (randomNumber==j+1)
            {
                nums[j]++;
                break;
            }
        }
    }

    for (i=0 ; i<6 ; i++)
    {
        printf("Number %d occurred %d times or ?\n" ,i+1,nums[i]);
    }
    return 0;
}