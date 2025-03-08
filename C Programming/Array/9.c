#include<stdio.h>
int main()
{
	int arr[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i] = arr[j];
				arr[j] = temp;			
			}
		}
	}
	printf("\nArray in ascending order = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nArray in descending order = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
