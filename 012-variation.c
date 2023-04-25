#include <stdio.h>

int main()
{
    int NUM1;
    int NUM2;
    printf("type a number then press ENTER . then type a second number and press ENTER again to see the avg\n");
    scanf("%d",&NUM1);
    scanf("%d",&NUM2);
    printf("average = %d\n" ,(NUM1+NUM2)/2);
    return 0;
}