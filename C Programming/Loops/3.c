#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending value = ");
	scanf("%d",&end);//10
	
	printf("\nNormal sequence = ");
	i=start;
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=end);
	
	printf("\nReversed sequence = ");
	i=end;
	do
	{
		printf("%d ",i);
		i--;
	}while(i>=start);
	return 0;
}
