#include <stdio.h>

int main()
{
    int TotalGrade;
    float GradeSum=0,Grades,resalt,A;
   
    printf("Enter total grade to average: \n");
    scanf("%d" ,&TotalGrade);
    A=TotalGrade;

    printf("tell me your First grades and tell me the other too:\n");
    while (TotalGrade>0)
    {
        scanf("%f" ,&Grades);
        GradeSum=Grades+GradeSum;
        TotalGrade=TotalGrade-1;
    }
    resalt=GradeSum/A;
    printf("The Average of this grades is : %.2f \n" ,resalt);
    return 0;
}