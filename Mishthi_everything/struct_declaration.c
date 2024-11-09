#include<stdio.h>
struct p  //defining the structure p
{
    int k;  //integer k
    char c; //character c
    float f;  //float f
};
int main()
{
    struct p x={.c=97,.f=3,.k=1};  //declaring the structure p x
    printf("%f\n",x.f);  //printing
}