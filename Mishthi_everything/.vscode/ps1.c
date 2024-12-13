#include<stdio.h>
int main()
{
    int i;
    int n;
    int s=1;
    printf("enter a number:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Factorial doesn't exist");
    }
    else{
    for(int i=n; i>=1; i--)
    {
        
        s=s*i;
    }
    printf("factorial of %d is %d",n,s);
    }
    
    return 0;
}