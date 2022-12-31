//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int a[10][10],m,n;
    printf("to print or display the UPPER triangular of a given matrix:-\n");
    printf("enter the size of the matrix in x format:-");
    scanf("%d x %d",&m,&n);
    printf("enter %d element of the  matrix:-",m*n);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<j)
                a[i][j]=0;
        }
    }
    printf("\n");
    printf("upper triangular is:-\n");
     for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
