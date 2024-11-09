#include<stdio.h>
void main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    if(i<0)
    {
        printf("It is a negative number.\n");
        printf("So factorial is not possible.\n");
        return 0;
    }
    int f = fact(i);
    printf("Factorial of %d is %d",i,f);
}
int  fact(int n)
{
    int f = 1;
    while(n != 0)
    {
        f = f*n;
        n--;
    }
    return f;
}
