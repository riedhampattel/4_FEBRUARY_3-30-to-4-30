#include<stdio.h>
int main()
{
	int num,flag=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//100
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
