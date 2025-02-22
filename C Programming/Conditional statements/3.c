#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the age = ");
	scanf("%d",&age);//2
	
	age>18 ? printf("\nYou are eligible for voting"):printf("\nYou are not eligible for voting");
	
	return 0;
}
