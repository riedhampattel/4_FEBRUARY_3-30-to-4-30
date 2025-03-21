#include<stdio.h>
int compare(char ch1[],char ch2[])
{
	int flag=0,i;
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]!=ch2[i])
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	int result = compare(str1,str2);
	if(result==0)
	{
		printf("\nBoth the strings are same");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	return 0;
}
