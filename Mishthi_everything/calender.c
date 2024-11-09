#include<stdio.h>
int main()
{
    int basicyear,inputyear,year,leapyear,remainingyear,day,totaldays;
    printf("enter an year:");
    scanf("%d",&inputyear);
    basicyear=2001;
    year = inputyear - basicyear;
    leapyear = year/4;
    remainingyear = year- leapyear;
	totaldays= (remainingyear*365) + (leapyear*366);
    day = totaldays % 7;
    printf("The day on January 1,%d is ",inputyear);
    switch(day)
    {
        case 0: printf("Monday\n");
        break;
        case 1: printf("Tuesday\n");
        break;
        case 2: printf("Wednesday\n");
        break;
        case 3: printf("Thursday\n");
        break;
        case 4: printf("Friday\n");
        break;
        case 5: printf("Saturday\n");
        break;
        case 6: printf("Sunday\n");
        break;
    }
return 0;
}