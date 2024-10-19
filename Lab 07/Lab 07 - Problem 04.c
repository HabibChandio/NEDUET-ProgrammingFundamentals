#include <stdio.h>
int main()
{
	int order, count;
	printf("Enter order of the square matrix: ");
	scanf("%d", &order);
	int mat[order][order];
	int matT[order][order];
	for(int i = 0; i < order; i++)
	{
		for(int j = 0; j < order; j++)
		{
			printf("Enter Element [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	for(int i = 0; i < order; i++)
	{
		for(int j = 0; j < order; j++)
		{
			matT[i][j] = mat[j][i];
		}
	}
	for(int i = 0; i < order; i++)
	{
		for(int j = 0; j < order; j++)
		{
			printf("%d ", matT[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < order; i++)
	{
		for(int j = 0; j < order; j++)
		{
			if(mat[i][j] == matT[i][j])
				count++;
		}
	}
	if(count == (order*order))
		printf("Matrix is symmetric.\n");
	else
		printf("Matrix is asymmetric.\n");
	return 0;
}
