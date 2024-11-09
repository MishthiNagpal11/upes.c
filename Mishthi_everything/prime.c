#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int c = prime(n);
    if(c==2)
    {
        printf("It is prime");
    }
    else
    {
        printf("It is not prime");
    }
}
int prime(int i)
{
    int f = 0;
    for(int j = 1; j <= i; j++)
    {
        if(i%j == 0)
        {
            f++;
        }
    }
    return f;
}
