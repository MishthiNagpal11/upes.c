#include<stdio.h>
struct temp  // defining a structure temp
{
    int a;  // adding a member 'a'
}s; //describing a global variable
void func(struct temp s)
{
    s.a=10;  //assing 10 to member a
    printf("%d\t",s.a);  // print the value a
}
main()
{
    func(s);  //call  the function
    printf("%d\t",s.a);  //printing the value
}