#include <stdio.h>

typedef struct location{
    int x;
    int y;
} location;

typedef struct cars{
    char type[10];
    char vin[12];
    int modelNumber;
    location currentLocation;
}cars;

int main()
{
    cars c1;
    printf("Enter type vin modelnumber and x,y location of your car: ");
    scanf("%s%s%d%d%d" ,&c1.type,&c1.vin,&c1.modelNumber,&c1.currentLocation.x,&c1.currentLocation.y);

    printf("\n%s\n" ,c1.type);
    printf("%s\n" ,c1.vin);
    printf("%d\n" ,c1.modelNumber);
    printf("%d,%d\n" ,c1.currentLocation.x,c1.currentLocation.y);

    return 0;
}