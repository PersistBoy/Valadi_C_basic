#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;

date inputDate()
{
    date dt;
    printf("Enter your target day: ");
    scanf("%d" ,&dt.day);
    printf("Enter your target month: ");
    scanf("%d" ,&dt.month);
    printf("Enter your target year: ");
    scanf("%d" ,&dt.year);
    return dt;
}

void outputDate(date dtOutput)
{
    printf("Next date is %d/%d/%d\n" ,dtOutput.day,dtOutput.month,dtOutput.year);
}

date generatNextDate(date currentDate)
{
    if (currentDate.day==31 && currentDate.month==12)
    {
        currentDate.day=1;
        currentDate.month=1;
        currentDate.year++;
    }
    else if (currentDate.day==31)
    {
        currentDate.day=1;
        currentDate.month++;
    }
    else
        currentDate.day++;
    return currentDate;
}

int main()
{
    outputDate(generatNextDate(inputDate()));
    return 0;
}