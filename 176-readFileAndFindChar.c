#include <stdio.h>

int main()
{
    FILE *fp;
    char userFileInput[10] = {0};
    char userChar;
    char myChar;
    int counter = 0;

    printf("Enter file name with fomat: ");
    scanf("%s" ,userFileInput);

    printf("Enter spicific charcater: ");
    scanf(" %c" ,&userChar);

    fp = fopen(userFileInput , "r");

    if (fp!=NULL)
    {
        printf("File opended and you can read from it\n");

        while (!feof(fp))
        {
            if (fgetc(fp) == userChar)
            {
                counter++;
            }
        }
        fclose(fp);
    }
    printf("\nnumber of apear that %c is :%d\n" ,userChar ,counter);
    return 0;
}