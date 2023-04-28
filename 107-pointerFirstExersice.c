#include <stdio.h>
/*Write a program that initializes 2 variables (of Integer type):
1-grade1.
2-grade2.
The program should print the VALUE and the ADDRESS of each of these variables.*/

int main()
{
    int grade1=5,grade2=7;
    int *p,*b;

    p=&grade1;
    b=&grade2;

    //Print Value:
    printf("grade1=%d and grade2=%d\n" ,grade1,grade2);
    printf("grade1=%d and grade2=%d\n\n" ,*p,*b);

    //print Address:
    printf("grade1=%p    and    grade2=%p\n" ,&grade1,&grade2);
    printf("grade1=%p    and    grade2=%p\n" ,p,b);
    
    return 0;
}