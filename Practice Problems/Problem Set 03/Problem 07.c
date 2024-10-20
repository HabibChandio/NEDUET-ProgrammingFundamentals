#include <stdio.h>
int main()
{
	int row1, column1, row2, column2;
	printf("Enter no. of rows of matrix 1: ");
	scanf("%d", &row1);
	printf("Enter no. of columns matrix 1: ");
	scanf("%d", &column1);
	printf("Enter no. of rows of matrix 2: ");
	scanf("%d", &row2);
	printf("Enter no. of columns matrix 2: ");
	scanf("%d", &column2);
	if(column1 != row2)
	{
		printf("Matrix can not be multiplied.\n");
		return 0;
	}
	int mat1[row1][column1], mat2[row2][column2], mat3[row1][column2];
	for(int i = 0; i < row1; i++)
	{
		for(int j = 0; j < column1; j++)
		{
			printf("Enter Element [%d, %d] of matix 1: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	for(int i = 0; i < row2; i++)
	{
		for(int j = 0; j < column2; j++)
		{
			printf("Enter Element [%d, %d] of matix 2: ", i+1, j+1);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("Resultant Matrix is:\n");
    for (int i = 0; i < row1; i++) 
	{
        for (int j = 0; j < column2; j++) 
		{
            mat3[i][j] = 0;
            for (int k = 0; k < row2; k++) 
			{
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
	}
	return 0;
}