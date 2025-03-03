#include<stdio.h>
int main()
{
	int terms,i,n1=0,n2=1,n3;
	printf("\nEnter the terms = ");
	scanf("%d",&terms);//7
	printf("\nFibonnaci series = %d %d ",n1,n2);
	for(i=1;i<=terms-2;i++)
	{
		n3 = n1+n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;	
	}	
	return 0;
}
