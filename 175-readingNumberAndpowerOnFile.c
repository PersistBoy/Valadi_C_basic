#include <stdio.h>
int main()
{
    FILE *fp;
    int num,power;
    fp=fopen("exersizeFile02.txt" , "r");
    if (fp!=NULL)
    {
        do{
            fscanf(fp , "%d%d" , &num,&power);
            printf("%d %d\n" ,num,power);
        } while (fgetc(fp) != EOF);
        fclose(fp);
    }
    return 0;
}