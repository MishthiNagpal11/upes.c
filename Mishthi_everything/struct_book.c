#include<stdio.h>
struct book
{
    char author[50];
    char title[50];
    int price;
}b1,b2,b3;
int main()
{
    printf("enter author name:");
    scanf("%s",&b1.author);
    printf("enter title:");
    scanf("%s",&b1.title);
    printf("enter price:");
    scanf("%d",&b1.price);
    
    printf("enter author name:");
    scanf("%s",&b2.author);
    printf("enter title:");
    scanf("%s",&b2.title);
    printf("enter price:");
    scanf("%d",&b2.price);
    
    printf("enter author name:");
    scanf("%s",&b3.author);
    printf("enter title:");
    scanf("%s",&b3.title);
    printf("enter price:");
    scanf("%d",&b3.price);

    printf(" BOOK 1 INFORMATION:%s %s %d\n",b1.author,b1.title,b1.price);
    printf(" BOOK 2 INFORMATION:%s %s %d\n",b2.author,b2.title,b2.price);
    printf(" BOOK 3 INFORMATION:%s %s %d\n",b3.author,b3.title,b3.price);

    if(b1.price > b2.price && b1.price > b3.price)
    {
        printf("%s is most expensive\n",b1.title);
    }
    else if(b2.price > b1.price && b2.price > b3.price)
    {
        printf("%s is most expensive\n",b2.title);
    } 
    else
    {
        printf("%s is most expensive\n",b3.title);
    }
    
    if(b1.price < b2.price && b1.price < b3.price)
    {
        printf("%s is least expensive\n",b1.title);
    }
    else if(b2.price < b1.price && b2.price < b3.price)
    {
        printf("%s is least expensive\n",b2.title);
    } 
    else
    {
        printf("%s is least expensive\n",b3.title);
    }
}