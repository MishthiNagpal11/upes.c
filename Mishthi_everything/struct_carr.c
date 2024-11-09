#include<stdio.h>
struct car
{
    int tank_cap;
    int seat_cap;
    float mileage;
};
int main()
{
    struct car c[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter car fuel tank cap:",i+1);
        scanf("%d",&c[i].tank_cap);
        printf("enter car seat cap:",i+1);
        scanf("%d",&c[i].seat_cap);
        printf("enter car mileage",i+1);
        scanf("%f",&c[i].mileage);
    }
    for(i=0;i<2;i++)
    {
        printf("car details:%d\n",i+1);
        printf("fuel tank cap:%d\n",c[i].tank_cap);
        printf("seat tank cap:%d\n",c[i].seat_cap);
        printf("mileage:%.1f\n",c[i].mileage);

    }
    return 0;
}