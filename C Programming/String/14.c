#include<stdio.h>

int length(char ch[])
{
	//hello
	int l=0,i;
	for(i=0;ch[i]!='\0';i++)
	{
			l++;
	}
	return l;	
}
int main()
{
	char str1[100];
	printf("\nEnter the string = ");
	gets(str1);
	printf("\nOriginal value of str1 = %s",str1);
	int result = length(str1);
	printf("\nLength of the string is = %d",result);
	return 0;
}
