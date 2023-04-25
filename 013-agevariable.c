#include <stdio.h>

int main()
{
    int currentyear;
    int yourage;
    printf("tell me the current year:");
    scanf("%d" ,&currentyear);
    printf("tell me your age now:");
    scanf("%d" ,&yourage);
    printf("your born year is\"%d\"\n" ,currentyear-yourage);
    return 0;
}