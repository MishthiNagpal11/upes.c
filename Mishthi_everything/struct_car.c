#include<stdio.h>
struct car
{
    int id;
    char model;
    int rate;
}c[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("enter car details:%d\n",i+1);
        printf("car id:");
        scanf("%d",&c[i].id);
        printf("car model:");
        scanf("%s",&c[i].model);
        printf("rental rate for one day:");
        scanf("%d",&c[i].rate);
    }
    printf("select car number from the given cars\n:");
    int ch;
    printf("enter your choice:");
    scanf("%d",&ch);
    ch=ch-1;
    int days;
    printf("enter number of days:");
    scanf("%d",&days);
    int tr= days*c[ch].rate;
    printf("enter rent for %d days is %d",days,tr);
}
