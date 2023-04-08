#include <stdio.h>

int main()
{
    int number=0;

    do {
        printf("Enter a new (another) number: ");
        scanf("%d" ,&number);
    } while (number>100 || number<0);
    printf("tnx your grade (%d) is valid\n" ,number);
    return 0;
}