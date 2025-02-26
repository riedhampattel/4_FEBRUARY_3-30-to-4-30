#include<stdio.h>
int main()
{
	int count,num,i,sum=0;
	printf("\nEnter the count = ");
	scanf("%d",&count);//3
	
	for(i=1;i<=count;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);//4
		sum = sum + num;
	}
	printf("\nThe addition of %d numbers is = %d",count,sum);
	printf("\nThe average of %d numbers is = %.2f",count,(float)sum/(float)count);
	return 0;
}
