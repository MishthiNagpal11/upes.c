#include<stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
}t1,t2;
int main()
{
    printf("enter hours:");
    scanf("%d",&t1.hours);
    printf("enter minutes:");
    scanf("%d",&t1.minutes);
    printf("enter seconds:");
    scanf("%d",&t1.seconds);
    printf("enter hours:");
    scanf("%d",&t2.hours);
    printf("enter minutes:");
    scanf("%d",&t2.minutes);
    printf("enter seconds:");
    scanf("%d",&t2.seconds);
    int total_hours=t1.hours+t2.hours;
    int total_minutes=t1.minutes+t2.minutes;
    int total_seconds=t1.seconds+t2.seconds;
    printf("total time:%d:%d:%d",total_hours,total_minutes,total_seconds);
}