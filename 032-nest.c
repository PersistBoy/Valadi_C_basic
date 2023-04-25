#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d" ,&grade);

    if (grade>=80)
        printf("congrats . your grade is good\n");
    else if (grade>=60)
        printf("good but need more practice\n");
    else
        printf("oops , you failed . try better next time\n");

return 0;
}