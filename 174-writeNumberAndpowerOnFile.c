#include <stdio.h>

int main()
{
    FILE *fp;
    int stopCondition = 0;

    fp = fopen("exersizeFile02.txt" , "w");

    if (fp != NULL)
    {

        while (stopCondition <= 200)
        {
            fprintf(fp , "%d %d\n" , stopCondition,stopCondition*stopCondition);
            stopCondition++;
        }
        fclose(fp);
    }
    return 0;
}