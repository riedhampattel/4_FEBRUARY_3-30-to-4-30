//Write a c program to take a number from the user and check whether it is positive, negative or neutral
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n%d is a positive number",num);
	}
	else if(num<0)
	{
		printf("\n%d is a negative number",num);
	}
	else
	{
		printf("\n%d is a neutral number",num);
	}
	return 0;
}
