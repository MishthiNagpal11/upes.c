#include<stdio.h>
    struct
    {
        char *name;
        int age;
        int salary;
    }emp1,emp2;

int manager()
{
    struct l 
    {
        char *name;
        int age;
        int salary;/* data */
    }manager;
    manager.age = 27;
    if(manager.age > 30)
    {
        manager.salary=65000;
    }
    else
    {
        manager.salary = 50000;
    }
    return manager.salary;
}
int main()
{
    printf("salary of employee1:");
    scanf("%d",&emp1.salary);
    printf("salary of employee2:%d",emp1.salary,emp2.salary,manager());
    
    return 0;
}