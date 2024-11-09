#include<stdio.h>
struct student  //defining a structure student
{
    char *name;  //adding a pointer name member
};
void main()
{
    struct student s,m;  //declaring two varibles
    s.name ="st";  //assigning the value 
    m=s;  //copy the content
    printf("%s %s",s.name,m.name);  //printing the values
}