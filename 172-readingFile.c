#include <stdio.h>

int main()
{
    FILE *fp;
    char myChar;
    int count = 0;

    fp= fopen("exersizeFile01.txt" , "r");

    if (fp!=NULL)
    {
        while (myChar!=EOF)
        {
            myChar=fgetc(fp);
             printf("%c" ,myChar);
             count++;
        }
    }
    fclose(fp);
    printf("\n%d\n" ,count);
    return 0;
}