#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char arstr[100];
   
    printf("enter a string:");
    scanf("%s",str);

    strcpy(arstr,str);
    int first = 0;
    int last = strlen(str)-1;
    char x;
    while( first < last)
    {
        x = arstr[first];
        arstr[first] = arstr[last];
        arstr[last] = x;
        first++;
        last--;
    }
    int val = strcmp(str,arstr);
    if(val==0)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
}