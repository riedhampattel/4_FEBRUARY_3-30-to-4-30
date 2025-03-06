#include<stdio.h>
int main()
{
	int a,i;
	int b[5];
	//index = 0  1   2  3  4
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element %d = ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
