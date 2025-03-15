#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);

	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	strcpy(str2,str1);
	
	printf("\nValue of str1 after copy = %s",str1);
	printf("\nValue of str2 after copy = %s",str2);
	return 0;
}
