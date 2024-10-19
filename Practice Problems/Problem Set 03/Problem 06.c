#include <stdio.h>
int main()
{
	int row, column, target;
	printf("Enter rows: ");
	scanf("%d", &row);
	printf("Enter columns: ");
	scanf("%d", &column);
	printf("Enter target value: ");
	scanf("%d", &target);
	int mat[row][column];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("Enter Element [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			if(mat[i][j] == target)
			{
				printf("%d is at position [%d, %d].\n", target, i+1, j+1);
				break;
			}
		}
	}
	return 0;
}