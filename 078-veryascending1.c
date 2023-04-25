#include <stdio.h>

int main()
{
    int loop=0,i,num1=0,num2=0,error=0;

    do{
        printf("Enter a size of numbers: ");
        scanf("%d" ,&loop);
    
    }while(loop<=0);
        printf("Now Enter number one by one: \n");

            for (i=1 ; i<=loop ; i++)
            {
                scanf("%d" ,&num2);
                if (num1>=num2){
                    error=1;
                }
                num1=num2;
            }
            if (error==1)
                printf("Not very escending\n");
            else
                printf("very ascending\n");
            return 0;

}