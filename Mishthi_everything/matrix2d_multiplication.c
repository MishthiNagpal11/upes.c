#include<stdio.h>
int main()
{
    int r1, r2, c1, c2;
    printf("Enter the row and column of first matrix: ");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    printf("Enter the row and column of second matrix: ");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    if(c1 != r2)
    {
        printf("Multiplication of Matrices not possible.");
        return 0;
    }
    printf("Enter numbers in matrix 1:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter numbers in matrix 2:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for(int i = 0; i < r1; i++)
    {
         for(int j = 0; j < c1; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix after multiplication of Matrix 1 and Matrix 2:\n");
    int mat3[r1][c2];
    for(int i = 0; i < r1; i++)
    {

        for(int j = 0; j < c2; j++)
        {
            mat3[i][j] = 0;
            for(int k = 0; k < c1; k++)
            {
                mat3[i][j] = mat3[i][j] + (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
}
 