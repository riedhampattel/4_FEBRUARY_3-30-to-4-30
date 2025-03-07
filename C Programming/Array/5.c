#include<stdio.h>
int main()
{
	int arr[100],size,i;//5
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nArray in reverse order = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
