#include <stdio.h>

int main()
{
    int s1,s2,m,h;
    printf("Enter the total second you have: ");
    scanf("%d" ,&s1);
    h=s1/3600;
    m=((s1-(h*3600))/60);
    s2=s1-((h*3600)+(m*60));
    printf("%.2d:%.2d:%.2d" ,h,m,s2);
    return 0;
}