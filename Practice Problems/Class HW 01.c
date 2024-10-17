#include <stdio.h>
int main()
{
	int row, col;
	printf("Enter rows of the matrix: ");
	scanf("%d", &row);
	printf("Enter columns of the matrix: ");
	scanf("%d", &col);
	int m1[row][col], m2[row][col], m3[row][col];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter element [%d, %d] of matrix 1: ", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter element [%d, %d] of matrix 2: ", i+1, j+1);
			scanf("%d", &m2[i][j]);
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("Sum of matrix 1 and matrix 2 is:\n");
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}