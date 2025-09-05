//Using struct
#include<stdio.h>
struct time_struct
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct time_struct t;
    //assigning values
    t.hours = 9;
    t.minutes = 11;
    t.seconds = 30;

    //displaying
    printf("Time: %2d:%2d:%2d\n",t.hours,t.minutes,t.seconds);
    return 0;
}