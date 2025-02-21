#include<stdio.h>
int main()
{
	int a;
	char ch;
	float f;
	printf("Enter the value in a = ");
	scanf("%d",&a);
	printf("\nEnter the value in ch = ");
	scanf(" %c",&ch);
	printf("\nEnter the value in f = ");
	scanf("%f",&f);
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %c",ch);
	printf("\nValue of a = %.2f",f);
	return 0;
}
