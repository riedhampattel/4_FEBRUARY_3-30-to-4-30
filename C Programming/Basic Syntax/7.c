#include<stdio.h>
int main()
{
	int n1,n2;
	char choice,ch='%';
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nPress '*' for multiplication");
	printf("\nPress '/' for division");
	printf("\nPress '%c' for remainder",ch);
	printf("\nEnter the choice = ");
	scanf(" %c",&choice);//+
	
	switch(choice)
	{
		case '+':
			printf("\nThe addition of %d and %d is %d",n1,n2,n1+n2);
		break;
		case '-':
			printf("\nThe subtraction of %d and %d is %d",n1,n2,n1-n2);
		break;
		case '*':
			printf("\nThe multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
		case '/':
			printf("\nThe division of %d and %d is %f",n1,n2,(float)n1/(float)n2);
		break;
		case '%':
			printf("\nThe remainder of %d and %d is %d",n1,n2,n1%n2);
		break;
	}
	return 0;
}
