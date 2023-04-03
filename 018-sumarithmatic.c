#include <stdio.h>
//an=a1+(n-1)*d
//we try to calculate sum of some terms on a arithmatic sequenses
//Sn=((a1+an)*n)/2
int main()
{
    float a1,d,an,sn;
    int n;

    printf("Enter the initial term (a1): ");
    scanf("%f" ,&a1);

    printf("Enter diffrenses number of arithmatic sequenses(d): ");
    scanf("%f" ,&d);

    printf("Enter the total term we have in this arithmatic sequenses(n): ");
    scanf("%d" ,&n);

    an=a1+(n-1)*d;     //an formula
    sn=((a1+an)*n)/2;  //sn formula

    printf("the n-th term based on what you tell me is: %f \n" ,an);
    printf("and the SUM of all n-th terms on whole sequenses is: %f \n" ,sn);
    return 0;
}