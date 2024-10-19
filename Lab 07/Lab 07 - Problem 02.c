#include <stdio.h>
int main()
{
	int row, col, count;
	printf("Enter rows of the matrix: ");
	scanf("%d", &row);
	printf("Enter columns of the matrix: ");
	scanf("%d", &col);
	int mat[row][col];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter Element [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
			if(mat[i][j] == 0)
				count++;
		}
	}
	if(count >= (row*col)/2)
		printf("Matrix is Sparse Matrix.\n");
	else
		printf("Matrix is not Sparse Matrix.\n");	
	return 0;
}