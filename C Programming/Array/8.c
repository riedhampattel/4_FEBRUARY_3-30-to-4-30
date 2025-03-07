#include<stdio.h>
int main()
{
	int size,arr[100],i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		int flag = 1;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag==1)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
