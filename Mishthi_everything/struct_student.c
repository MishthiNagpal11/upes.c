#include<stdio.h>
struct students
{
    char name[50];
    int age;
    int marks;
}s1,s2;
int main()
{
    printf("enter name:");
    scanf("%s",s1.name);
    printf("enter age:");
    scanf("%d",&s1.age);
    printf("enter marks:");
    scanf("%d",&s1.marks);
    printf("enter name:");
    scanf("%s",s2.name);
    printf("enter age:");
    scanf("%d",&s2.age);
    printf("enter marks:");
    scanf("%d",&s2.marks);
    printf("%s %d %d\n",s1.name,s1.age,s1.marks);
    printf("%s %d %d\n",s2.name,s2.age,s2.marks);
    int averagemarks=(s1.marks + s2.marks)/2;
    printf("Average marks:%d\n",averagemarks);
}