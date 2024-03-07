#include <stdio.h>

int main()
{
    int row1,col1,row2,col2;
    printf("Enter the rows and columns of 1st matrix : ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the rows and columns of 2nd matrix : ");
    scanf("%d %d",&row2,&col2);
    int mat1[row1][col1],mat2[row2][col2];

    printf("Enter the 1st matrix : ");
    for(int i=1;i<=row1;i++)
    {
        for(int j=1;j<=col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the 2nd matrix : ");
    for(int i=1;i<=row2;i++)
    {
        for(int j=1;j<=col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    if(col1 == row2)
    {
        int result[row1][col2];
        for(int i=1;i<=row1;i++)
        {
            for(int j=1;j<=col2;j++)
            {
                result[i][j]=0;
                for(int k=1;k<=row2;k++)
                {
                    result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        } 

        printf("The multiplication of matrix is : \n");
        for(int i=1;i<=row1;i++)
        {
            for(int j=1;j<=col2;j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }

    
    return 0;
}