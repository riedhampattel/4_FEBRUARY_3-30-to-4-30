#include<stdio.h>
int main()
{
	int arr[10][10],size,i,j;
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)//row
	{
		for(j=0;j<size;j++)//col
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray = \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
