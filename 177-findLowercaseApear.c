#include <stdio.h>
#define size 300
int main()
{
    FILE *fp;
    char userFileInput[11] = {0};
    char currentChar;
    int countArr[26] = {0};
    int i;
    printf("Enter file name with fomat: ");
    scanf("%s" ,userFileInput);
    fp = fopen(userFileInput , "r");
    if (fp!=NULL)
    {
        while (!feof(fp))
        {
            currentChar=fgetc(fp);
            if (currentChar>='a' && currentChar<='z')
                countArr[currentChar-'a']++;
        }
        fclose(fp);
        for (i=0 ; i<26 ; i++)
        {
            printf("the char %c is apear %d\n" ,i+'a' ,countArr[i]);
        }
    }
    return 0;
}