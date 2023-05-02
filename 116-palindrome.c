#include <stdio.h>
int main()
{
    int i;
    int size;
    int flag=0;
    printf("give me the size of palindrome: ");
    scanf("%d" ,&size);
    int palindromArr[size];
    //get array values
    for (i=0 ; i<size ; i++)
    {
        printf("Enter the no.%d: " ,i+1);
        scanf("%d" ,&palindromArr[i]);
    }
    i=0;
    while (i<(size/2))
    {
        if (palindromArr[i]==palindromArr[size-(i+1)])
        {
            i++;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("Not palindroma\n");
    else
        printf("is palindroma\n");
    return 0;
}