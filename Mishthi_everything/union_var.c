#include<stdio.h>
union abc
{
    int a;
    char b;
};
int main()
{
    union abc var;
    var.a=90;
    var.b='Z';
    union abc *p=&var;
    printf("%d %c",p -> a, p -> b );
}