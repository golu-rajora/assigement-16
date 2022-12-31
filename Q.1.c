//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    printf("to calculate the sum of two matrices each of order 3x3:-\n");
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
    printf("sum of two matrix is:-\n");
     for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf(" %d",a[i][j]+b[i][j]);

        }
        printf("\n");
}
getch();
return 0;
}
