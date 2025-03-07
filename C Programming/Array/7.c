#include<stdio.h>
int main()
{
	int size,arr[100],i,j,num;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nPrime numbers = ");
	for(i=0;i<size;i++)
	{
		int flag = 1;
		num = arr[i];
		for(j=2;j<=num/2;j++)
		{
			if(num%j==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",num);
		}
	}
	return 0;
}
