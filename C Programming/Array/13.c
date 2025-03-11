#include<stdio.h>
int main()
{
	int row,col,i,j,arr[10][10];
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	printf("\nEnter the col count = ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray = \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
