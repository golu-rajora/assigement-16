//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    printf("to find the transpose of a given matrix:-\n");
    printf("enter a first matrix 3X3:-\n");
    int a[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n transpose matrix is:-\n");
    for(int j=0;j<=2;j++)
    {
        for(int i=0;i<=2;i++)
           {
            printf(" %d",a[i][j]);
           }
           printf("\n");
    }
    getch();
    return 0;
}
