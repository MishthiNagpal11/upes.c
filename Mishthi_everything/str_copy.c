#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="hello";
    char b[]="hell";
    
    strcpy(a,b);
    strcpy(b,a);

    printf("%s %s",a,b);
    
}