#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	strupr(str1);
	strlwr(str2);
	
	printf("\nstr1 in Upper case = %s",str1);
	printf("\nstr2 in Lower case = %s",str2);
	return 0;
}
