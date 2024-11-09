#include<stdio.h>
int main()
{
    int n,i,positive=0,negative=0,zero=0,odd=0,even=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("positive numbers:%d\n",positive);
    printf("negative numbers:%d\n",negative);
    printf("zero:%d\n",zero);
    printf("even nuumbers:%d\n",even);
    printf("odd numbers:%d\n",odd);
    return 0;
}