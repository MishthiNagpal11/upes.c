#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string1:");
    scanf("%s",str1);
    printf("Enter string2:");
    scanf("%s",str2);
    strcat(str1, str2);
    printf("concatenated string:%s",str1);
    return 0;

}
