#include<stdio.h>
void calc(int x);
int main()
{
    int x=10;
    x=x+10;
    printf("value of x in calc function is %d",x);
    return 0;
}
void calc(int x)
{
    int x=10;
    calc(x);
    printf("value of x in main is %d",x);

}