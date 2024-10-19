#include <stdio.h>
int main()
{
	int row, col, max = 0;
	printf("Enter rows of matrix: ");
	scanf("%d", &row);
	printf("Enter columns of matrix: ");
	scanf("%d", &col);
	int mat[row][col];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter Element [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
			if(mat[i][j] > max)
				max = mat[i][j];
		}
	}
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Max number: %d\n", max);
	return 0;
}