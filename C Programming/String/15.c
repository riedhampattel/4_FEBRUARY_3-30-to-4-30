#include<stdio.h>
void reverse(char ch[])
{
	int len=0,i;
	for(i=0;ch[i]!='\0';i++)
	{
		len++;
	}
	printf("\nReversed string = ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal string = %s",str);
	reverse(str);
	
	return 0;
}
