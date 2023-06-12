#include <stdio.h>

int main()
{
    FILE *fp;
    char userFileInput[11] = {0};
    int countArr[26] = {0};
    int i;

    printf("Enter file name with fomat: ");
    scanf("%s" ,userFileInput);

    fp = fopen(userFileInput , "r");

    if (fp!=NULL)
    {
        while (fgetc(fp)!= EOF)
        {
            if (fgetc(fp)>= 'a' && fgetc(fp)<='z')
            {
                
            }
        }
        
    }
}