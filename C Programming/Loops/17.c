/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//3
	for(i=1;i<=row;i++)//4
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
