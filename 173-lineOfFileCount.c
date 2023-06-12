#include <stdio.h>

int main()
{
    FILE *fp;
    char myChar;
    int lineCounter = 0;
    
    fp = fopen("exersizeFile01.txt" , "r");

    if (fp != NULL)
    {
        while (myChar != EOF)
        {
            myChar = fgetc(fp);
            if (myChar=='\n')
                lineCounter++;
        }
        
        printf("%d\n" ,lineCounter+1);
        fclose(fp);
    }
    return 0;
}