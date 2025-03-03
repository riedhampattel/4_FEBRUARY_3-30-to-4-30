/*
Write a c program to take row and column number from the user and print the following pattern.

* * * *
* * * *
* * * *
* * * *
*/
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//2
	printf("\nEnter the col count = ");
	scanf("%d",&col);//3
	
	for(i=1;i<=row;i++)//row
	{
		for(j=1;j<=col;j++)//col
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
