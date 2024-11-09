#include<stdio.h>
struct Employee
{
    int employee_id;
    char name[100];
    int salary;
};
int main()
{
    struct Employee x[3];
    for(int i=0;i<3;i++)
    {
        printf("enter employee id:",i+1);
        scanf("%d",&x[i].employee_id);
        printf("enter name:", i+1);
        scanf("%s",&x[i].name);
        printf("enter salary:",i+1);
        scanf("%d",&x[i].salary);
    }
    {   
        if((x[0].salary>x[1].salary)&&(x[0].salary>x[2].salary))
        {
            printf("highest salary is %d of employee %s and it employee id is %d",x[0].salary,x[0].name,x[0].employee_id);
        }
        else if((x[1].salary > x[2].salary) && (x[1].salary > x[0].salary))
        {
         printf("highest salary is %d of employee %s and it employee id is %d",x[1].salary,x[1].name,x[1].employee_id);
        }   
        else
        {
            printf("highest salary is %d of employee %s and it employee id is %d",x[2].salary,x[2].name,x[2].employee_id);
        }
    }   
}