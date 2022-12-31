//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],r=0,c=0;
    printf("find the sum of rows and columns of a Matrix:-\n");
    printf("enter a matrix 3x3:-\n");
        for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            r=r+a[i][j];
            c=c+a[i][j];
        }
    }
    printf("sum of row is=%d",r);
    printf("\nsum of column is=%d",c);
    getch();
    return 0;

}
