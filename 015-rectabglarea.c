#include <stdio.h>

int main()
{
    double height;
    double width;
    printf("tell me the hight of your rectangle plz: ");
    scanf("%lf" ,&height);
    printf("Now tell me the width of that rectangle plz: ");
    scanf("%lf" ,&width);
    printf("ok now i can tell you the area of your rectangle . and the number is: %.2lf \n" ,height*width);
    return 0;
}