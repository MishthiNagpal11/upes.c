#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int g;
    if(a>b)
    {
        g = gcd(a,b);
    }
    else
    {
        g = gcd(b,a);
    }
    printf("GCD of %d and %d is %d",a,b,g);
}
int gcd(int x, int y)
{
    int r = x%y;
    while(r!=0)
    {
        x = y;
        y = r;
        r = x%y;
    }
    return x;
}

