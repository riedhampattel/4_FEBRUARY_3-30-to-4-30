#include<stdio.h>
int main()
{
	int a = 10;
	int *ptr = &a; 
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %d",*ptr);

	printf("\nAddress of a = %p",ptr);
	printf("\nAddress of a = %p",&a);
	return 0;
}
