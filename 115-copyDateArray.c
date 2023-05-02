#include <stdio.h>

int main()
{
    int dateArr[3]={11,2,1402};
    int secondDateArr[3];
    int i;

    for(i=0 ; i<3 ; i++)
    {
        secondDateArr[i]=dateArr[i];
    }

    printf("the first date is %d %d %d\n" ,dateArr[0],dateArr[1],dateArr[2]);
    printf("the second date is %d %d %d\n" ,secondDateArr[0],secondDateArr[1],secondDateArr[2]);
    return 0;

}