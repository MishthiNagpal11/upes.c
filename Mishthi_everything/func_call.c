#include<stdio.h>
int main()
{
    static int a = 0;
    int b = 0;
    a++;
    a++;
    b++;
    printf("a:%d\n",a);
    printf("b:%d\n",b);
}
int func()
{
    main();
return 0;
}