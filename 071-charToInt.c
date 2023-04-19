#include <stdio.h>

int charToInt(char ch1,char ch2,char ch3)
{
    int int1,int2,int3;
    int resault;
    if ((ch1<='9' && ch1>='0') && (ch2<='9' && ch2>='0') && (ch3<='9' && ch3>='0'))
    {
        int1=(ch1-'0')*100;
        int2=(ch2-'0')*10;
        int3=(ch3-'0')*1;
        resault=int1+int2+int3;
        return resault;
    }
    else
    return -1; 
}
int main()
{
    char a,b,c;

    printf("Enter 3 digit as character: ");
    scanf("%c%c%c" ,&a ,&b ,&c);

    if (charToInt(a,b,c)==-1)
    printf("one of your numbers is not a digit\n");
    else
    printf("%d\n" ,charToInt(a,b,c));
    return 0;
}