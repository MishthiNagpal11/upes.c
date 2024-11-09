#include<stdio.h>
struct p   //defining a structure p
{  //adding members to the structure
    int k;  //integer k
    char c;  //character c
    float f;  //float f
};
int p=10;  //integer p
int main()
{
    struct p x ={1,97};  //declaring the structure p x
    printf("%f%d\n",x.f,p);  //printing 
}