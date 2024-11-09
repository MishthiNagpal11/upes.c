#include<stdio.h>
struct            //defining a structure
{                 //adding members to the structure 
    int k;        // integer k
    char c;       // character c
}p;               //describing a global variable
int main()
{
    struct p;     //declaring structure
    p.k=10;  
    printf("%d\n",p.k);  //printing 
    return 0;      //returning back
}
