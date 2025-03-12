#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int *ptr = &a;
	
	printf("\nAddress of a = %p",ptr);
	printf("\nAddress of a[0] = %p",&a[0]);
	printf("\nAddress of a[1] = %p",&a[1]);
	printf("\nAddress of a[2] = %p",&a[2]);
	printf("\nAddress of a[3] = %p",&a[3]);
	printf("\nAddress of a[4] = %p",&a[4]);
	
	printf("\nValue at a[0] = %d",*ptr);
	printf("\nValue at a[1] = %d",*ptr+1);
	printf("\nValue at a[2] = %d",*ptr+2);
	printf("\nValue at a[3] = %d",*ptr+3);
	printf("\nValue at a[4] = %d",*ptr+4);
	return 0;
}
