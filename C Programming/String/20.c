#include<stdio.h>
void upper(char ch1[])
{
	int i;
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]>='a' && ch1[i]<='z')
		{
			ch1[i] = ch1[i] - 32;
		}
	}
}
void lower(char ch2[])
{
	int i;
	for(i=0;ch2[i]!='\0';i++)
	{
		if(ch2[i]>='A' && ch2[i]<='Z')
		{
			ch2[i] = ch2[i] + 32;
		}
	}
}
int main()
{
	char str1[100],str2[50];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\nOrignal value of str1 = %s",str1);
	printf("\nOrignal value of str2 = %s",str2);
	
	upper(str1);
	lower(str2);
	
	printf("\nValue of str1 in upper case = %s",str1);
	printf("\nValue of str2 in lower case = %s",str2);
	return 0;
}
