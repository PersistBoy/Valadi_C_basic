#include <stdio.h>
  //ba madx speed dar min time be maghsad miresim
  //be jaye = zade boodam -
int main()
{
    int t2 ,mint2 , maxt2;  
    float t1,s, mins ,maxs,d, mint ,maxt;
    printf("Enter the distansec between \"A\" location and \"B\" location(d): ");
        scanf("%f" ,&d);
    printf("Enter the Max speed you want to drive in the road: ");
        scanf("%f" ,&maxs);
    printf("Enter the min speed you want to drive in the road: ");
        scanf("%f" ,&mins);
    s=(mins+maxs)/2;
    t1=d/s;
        maxt=d/mins;
        mint=d/maxs;
    t2=t1*60;
        maxt2=maxt*60;
        mint2=mint*60;
    printf("The average time you should drive in that road is %d:%d minute\n\n" ,t2/60,t2%60);
    printf("or\n\n you shold drive between (((%d:%d))) minutes and (((%d:%d))) mintures in that road" ,mint2/60,mint2%60,maxt2/60,maxt2%60);
    return 0;
}