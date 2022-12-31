//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int a[10][10],m,n,c=0;
    printf("to accept a matrix and determine whether it is a sparse matrix.:-\n");
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
            if(a[i][j]==0)
                c++;
        }
    }
    printf("\n");
    if(m*n/2>=c)
        printf("it is a spares matrix");
    else
        printf("it is not spares matrix");
    getch();
    return 0;
}
