#include<stdio.h>
struct student    //creating a structure student
{
    char *name;  //adding a pointer name member 
};
struct student s;    //describing a global structure s 
struct student fun(void)  //return to the function
{
    s.name="newton";   //giving a name
    printf("%s\n",s.name);  //printing the name
    s.name="alan";   //renaming 
    return s;   //returning back
}
void main() 
{
    struct student m=fun();   //calling the func
    printf("%s\n",m.name);   //storing a name value
    m.name="turin";   //changing m.name to turin
    printf("%s\n",s.name);  //printing s.name
}