#include<stdio.h>
struct circle
{
    float radius;
    float perimeter;
    float area;
};
int main()
{
    struct circle x[2];
    for (int i=0;i<2;i++)
    {
        printf("enter radius",i+1);
        scanf("%f",&x[i].radius);
        x[i].perimeter=2*3.14*x[i].radius;
        x[i].area=3.14*x[i].radius*x[i].radius;
        printf("perimeter:%f\n",x[i].perimeter);
        printf("area:%f\n",x[i].area);
    }
}