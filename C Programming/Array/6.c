#include<stdio.h>
int main()
{
	int arr[100],size,i,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nThe sum of an array = %d",sum);
	printf("\nThe average of an array = %.2f",(float)sum/(float)size);
	return 0;
}
