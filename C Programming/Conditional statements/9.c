//Write a c program to take a number from the user and check whether it is even or odd
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is an even number",num);
	}
	else
	{
		printf("\n%d is an odd number",num);
	}
	return 0;
}
