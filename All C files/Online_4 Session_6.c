#include<stdio.h>
int main()
{

    int i,j,r,c;
    int matrix[100][100];
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);

    printf("Enter matrix : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&matrix[i][j]);

        }

    }
    printf("Transpose matrix : \n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ",matrix[j][i]);

        }
        printf("\n");

    }

    if(matrix[i][j]==matrix[i][j])
        printf("symmetric matrix\n");
    else
        printf("Not symmejtric\n");


}
