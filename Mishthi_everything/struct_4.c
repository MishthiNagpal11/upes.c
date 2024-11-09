#include<stdio.h>
struct  //defining a structure 
{  //adding members to the structure 
    int k;  // integer k
    char c;  // character c
}p;  //describing a global variable

int main()

{
    struct p; //declaring structure
    int s=10; //error:changing p to s as p has already been declared that's why have to chave to some another variable name. 
    p.k=10;
    printf("%d %d\n",p.k,s);  //error:as we declared s so changing the value to s from p.
}


