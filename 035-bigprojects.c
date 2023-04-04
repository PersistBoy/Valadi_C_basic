#include <stdio.h>

int main()
{
    int day,month,year,error;
    error=0;

    printf("tell me your target date with following format (day month year): ");
    scanf("%d%d%d" ,&day ,&month ,&year);

    //condition for month and day
    switch (month)
    {
        case 1:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else{
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
                }
                    break;


                //mohasebe sal kabise         {
        case 2:
            if (year%400==0 && day==29) 
                printf("%d %d" ,1,month+1);
            else if (year%400==0 && day<29 && day>=1)
                printf("%d %d" ,day+1,month);
            else if (year%100==0 && day==28)
                printf("%d %d" ,1,month+1);
            else if (year%100==0 && day<28 && day>=1)
                printf("%d %d" ,day+1,month);
            else if (year%4==0 && day==29)
                printf("%d %d" ,1,month+1);
            else if (year%4==0 && day<29 && day>=1)
                printf("%d %d" ,day+1,month);

        case 3:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 4:
            if (day==30)
                printf("%d %d" ,1,month+1);
            else if (day<30 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 5:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 6:
            if (day==30)
                printf("%d %d" ,1,month+1);
            else if (day<30 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 7:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 8:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 9:
            if (day==30)
                printf("%d %d" ,1,month+1);
            else if (day<30 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 10:
            if (day==31)
                printf("%d %d" ,1,month+1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 11:
            if (day==30)
                printf("%d %d" ,1,month+1);
            else if (day<30 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        case 12:
            if (day==31)
                printf("%d %d" ,1,1);
            else if (day<31 && day>=1)
                printf("%d %d" ,day+1,month);
            else
            {
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
            }       break;
        default:
                error=1; // 1 shodane error be manaie vorodi eshtebah karbar (dar entehaie code ba dastoor switch case jologoro mishe az print "year")
                printf("Error");
                    break;
        }
            //conditions for year
            switch (error)
            {
                case 1:
                    printf("\n");
                break;
                case 0:
            if (month==12 && day==31)
                printf(" %d " ,year+1);
            else
                printf(" %d " ,year);
                break;
            }
    return 0;  
}