//5. Write a program in C to find the sum of left diagonals of a matrix
#include<stdio.h>
int main()
{
     int a[3][3],s=0;
    printf(" find the sum of left diagonals of a matrix:-\n");
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
            if(i+j==2)
                s=s+a[i][j];

        }
    }
    printf("\n sum of left diogonals of the matrix is=%d",s);
    getch();
    return 0;
}
