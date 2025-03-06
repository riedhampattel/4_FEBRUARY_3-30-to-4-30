#include<stdio.h>
int main()
{
	int arr[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
