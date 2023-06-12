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
    return 0;
}