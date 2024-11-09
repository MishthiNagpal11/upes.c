#include<stdio.h>
int main()
{
    rev();
}
int rev()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s",&s);
    int l = strlen(s);
    printf("Reverse of string is ");
    for(int i = (l-1); i >= 0; i--)
    {
        printf("%c",s[i]);
    }
}
