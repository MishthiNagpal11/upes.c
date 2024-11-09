#include<stdio.h>
int main()
{
    int n,i,num,count=0;
    printf("enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to see its frequency:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
    if(arr[i] == num)
    {
        count++;
    }
    }
    printf("the frequency of element %d:%d\n",num,count);
    return 0;
}