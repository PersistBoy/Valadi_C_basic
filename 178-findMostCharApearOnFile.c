#include <stdio.h>
#define size 50
int main()
{
    FILE *fp;
    char fileName[15]={0};
    char currentChar;
    int countArr[26] = {0};
    int maxIndex = 0 ;
    int i;

    printf("Enter filename: ");
    scanf("%s" ,fileName);

    fp=fopen(fileName , "r");

    if (fp!=NULL)
    {
        printf("File opende\n");
        
        
        while (!feof(fp))
        {
            currentChar = fgetc(fp);
            if (currentChar>= 'a' && currentChar<='z')
            {
                countArr[currentChar- 'a']++;
            }
        }
        fclose(fp);
    }
    for (i=1 ; i<26 ; i++)
            {
                if (countArr[maxIndex]<countArr[i])
                    maxIndex = i;
            }
        for (i=0 ; i<26 ; i++)
        {
            printf("the char %c is apear %d time\n" ,i+'a',countArr[i]);
        }
        printf("\nTHE CHAR %c APEAR MOST WITH %d TIME\n" ,maxIndex+'a' , countArr[maxIndex]);
    return 0;
}