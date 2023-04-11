#include <stdio.h>

int main()
{
    int i,n,j,space;
    int cv=1;
    
    printf("Enter a number:");
    scanf("%d",&n);

    for (i=1 ; i<=n ; i++)
    {
        for (space=n-i ; space>=1 ; space--)
        {
            printf(" ");
        }
        
        
        for (j=1 ; j<=i ; j++)
        {
            printf("%d " ,cv);
            cv+=1;
        }
        
        printf("\n");
    } 
    return 0;
}