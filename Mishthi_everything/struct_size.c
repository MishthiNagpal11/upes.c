#include<stdio.h>
struct abc
{
    int a;
    double c;
    char b;
    float d;
};
int main()
{
    printf("%d",sizeof(struct abc));
}
