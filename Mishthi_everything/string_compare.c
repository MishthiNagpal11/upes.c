#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter string 1:");
    scanf("%s",str1);
    printf("enter string 2:");
    scanf("%s",str2);
    printf("value after comparing :%d",strcmp(str1,str2));
    return 0;
}