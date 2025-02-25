#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	printf("\nEven numbers = ");
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nOdd numbers = ");
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
