#include<stdio.h>
struct student  //declaring the dtructure student
{
    char *name;  //adding a pointer name member
};
struct student fun(void) 
{
    struct student s;  //describing a global variable s
    s.name ="alan";  //assigning the value
    return s;  //returning 
}
void main()
{
    struct student m=fun();  //describing the value
    m.name="turing";  // assigning the value
    printf("%s",m.name);  // printing the name
}