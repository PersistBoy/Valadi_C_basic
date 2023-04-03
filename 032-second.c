#include <stdio.h>

int main()
{   
    int seconds,hours,minutes,RemainingSeconds;
    printf("tell me total seconds(S): ");
    scanf("%d" ,&seconds);

    hours=seconds/3600;
    minutes=(seconds-(3600*hours))/60;
    RemainingSeconds=(seconds-(3600*hours))%60;

            //NORMAL WAY IS:

    printf("Normal way is: ");
    printf("%d:%d:%d\n" ,hours,minutes,RemainingSeconds);

            //HARD WAY IS:


    printf("Hard way is: ");
    if (hours<10 && minutes<10 && RemainingSeconds<10)
        printf("0%d:0%d:0%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours<10 && minutes<10 && RemainingSeconds>=10)
        printf("0%d:0%d:%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours<10 && minutes>=10 && RemainingSeconds<10)
        printf("0%d:%d:0%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours>=10 && minutes<10 && RemainingSeconds<10)
        printf("%d:0%d:0%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours>=10 && minutes>=10 && RemainingSeconds>=10)
        printf("%d:%d:%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours>=10 && minutes>=10 && RemainingSeconds<10)
        printf("%d:%d:0%d\n" ,hours,minutes,RemainingSeconds);
    else if (hours>=10 && minutes<10 && RemainingSeconds>=10)
        printf("%d:0%d:%d\n" ,hours,minutes,RemainingSeconds);
    else
        printf("0%d:%d:%d\n" ,hours,minutes,RemainingSeconds);

            //EASY WAY IS:

    printf("Easy way is: ");

    if (hours<10)
        printf("0");
    printf("%d:" ,hours);
    if (minutes<10)
        printf("0");
    printf("%d:" ,minutes);
    if (RemainingSeconds<10)
        printf("0");
    printf("%d\n" ,RemainingSeconds);

    return 0;

}