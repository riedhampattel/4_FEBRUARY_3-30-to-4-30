#include<stdio.h>
int main()
{
	int n1,n2,ans;
	
	//addition
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//2
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//3
	ans = n1 + n2;
	printf("\nThe addition of %d and %d is %d",n1,n2,ans);
	
	//subtraction
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//7
	ans = n1 - n2;
	printf("\nThe subtraction of %d and %d is %d",n1,n2,ans);
	
	//multiplication
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//7
	ans = n1 * n2;
	printf("\nThe multiplication of %d and %d is %d",n1,n2,ans);
	
	//division
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//7
	printf("\nThe division of %d and %d is %f",n1,n2,(float)n1/(float)n2);
	
	//remainder
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//7
	printf("\nThe remainder of %d and %d is %d",n1,n2,n1%n2);
	return 0;
}
