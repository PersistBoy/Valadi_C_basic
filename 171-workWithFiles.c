#include <stdio.h>
int main()
{
    FILE *pf;
    int count = 0;

    pf = fopen("exersizeFile01.txt", "w");

    if (pf!=NULL)
    {
        fputs("Hey, this is\n" , pf);
        fputs("Vlad\n" , pf);
        fputs("from AlphaTech\n" , pf);
    }
    fclose(pf);
    pf = fopen("exersizeFile01.txt", "r");
    if (pf!=NULL)
    {
        while(fgetc(pf))
        {
            count++;
        }
        printf("%d\n" ,count);
    }
    fclose(pf);
    return 0;
}