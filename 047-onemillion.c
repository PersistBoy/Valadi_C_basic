#include <stdio.h>

int main()
{
    int startnum,i,cent=1;
    char UserAsk;
    printf("you want 1 million dollar today or 1 cent doubled in 30 day? (m = 1mill  c = 1cent): ");
    scanf("%c" ,&UserAsk);
    if (UserAsk=='c')
    {
        printf("congrats you choose better choices\n\n");
            for (i=1 ; i<=30 ; i++)
            {
        
                printf("on day %d you have %d cent\n" ,i,cent);
                cent=cent*2;
            }
            printf("\nthe %d cent mean %d dollar\n" ,cent,cent/100);
            printf("so now you have %d million dollar after 30 day :)\n" ,cent/100000000);
    }
    else if (UserAsk=='m')
        printf("as you with . here your 1 million dollar\nbut you loose ~4 million dollar\n");
    return 0;
}