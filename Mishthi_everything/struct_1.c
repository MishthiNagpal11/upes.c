#include<stdio.h>
void  main()   
{
    struct student  //defining a structure student
    {  //adding members to the structure 
        int no;  //integer no
        char name[20];  //character name with range 200
    };
    struct student s;  //declaring the sturcture student as s
    s.no=8;  //error:changed no to s.no because it can show runtime error.
    printf("%d",s.no);  //printing 
}