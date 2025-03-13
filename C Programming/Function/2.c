#include<stdio.h>
//with return type without argument
float div();

float div()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);
	float ans = (float)n1/(float)n2;
	return ans;
}

int main()
{
	float result = div();
	printf("\nThe division is = %.2f",result);
	return 0;
}
