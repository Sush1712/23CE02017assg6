#include <stdio.h>
int main()
{
    int r, c;
    printf("enter number of rows:");
    scanf("%d", &r);
    printf("enter number of columns:");
    scanf("%d", &c);
    int mat[r][c], mat1[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the element row-%d column-%d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("input matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat1[j][i]=mat[i][j];
        }
    }
    printf("output matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
