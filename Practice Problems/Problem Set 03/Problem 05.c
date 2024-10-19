#include <stdio.h>
int main()
{
	int row, column;
	printf("Enter no. of rows: ");
	scanf("%d", &row);
	printf("Enter no. of columns: ");
	scanf("%d", &column);
	int mat[row][column], matT[column][row];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("Enter Element [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < column; i++)
	{
		for(int j = 0; j < row; j++)
		{
			matT[i][j] = mat[j][i];
		}
	}
	printf("\n");
	for(int i = 0; i < column; i++)
	{
		for(int j = 0; j < row; j++)
		{
			printf("%d ", matT[i][j]);
		}
		printf("\n");
	}
	return 0;
}