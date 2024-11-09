#include<stdio.h>
int main()
{
    int n,i,max1,max2;
    printf("enter the number of elments:");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1 = max2 = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
if(max2 != arr[0])
{
    printf("the second largest number:%d",max2);
}
return 0;
}