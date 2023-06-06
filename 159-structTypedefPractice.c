#include <stdio.h>

typedef struct karmand{
    int age;
    int sabeghekar;
    char name[10];
    char lastname[20];
    float hoghooghDarkhasti;
} karmand ;

karmand karmandInput()
{
    karmand input;
    printf("Enter age of this karmand: ");
    scanf("%d" ,&input.age);
    printf("Enter sabeghekar of this karmand: ");
    scanf("%d" ,&input.sabeghekar);
    printf("Enter this karmands name: ");
    scanf("%s" ,&input.name);
    printf("Enter this karmands lastname: ");
    scanf("%s" ,&input.lastname);
    printf("Enter the hoghooghDarkhasti of this karmand: ");
    scanf("%f" ,&input.hoghooghDarkhasti);
    return input;
}

void printKarmandDetails(karmand output)
{
    printf("this karmand details:\n");
    printf("age: %d\n" ,output.age);
    printf("sabeghekar: %d\n" ,output.sabeghekar);
    printf("name: %s\n" ,output.name);
    printf("lastname: %s\n" ,output.lastname);
    printf("hoghoogh: %.2f\n" ,output.hoghooghDarkhasti);
}

int main()
{
    printKarmandDetails(karmandInput());
    return 0;
}