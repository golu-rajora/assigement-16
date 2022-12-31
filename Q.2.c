//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int s=0,c[3][3];
    printf("to calculate the product of two matrices each of order 3x3:-\n");
    printf("enter a first matrix 3X3:-\n");
    int a[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
     printf("enter a second matrix 3X3:-\n");
    int b[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            s=0;
            for(int k=0;k<=2;k++)
            {
                s=a[i][k]*b[k][j]+s;
            }
            c[i][j]=s;
            printf("\n");
        }
    }
    printf("\n");
    printf("\n");
    printf("the product of two matrices is:-\n\n");
     for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}


