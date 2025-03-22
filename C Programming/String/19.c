#include<stdio.h>

void concate(char ch1[],char ch2[])
{
	int len=0,i;
	for(i=0;ch1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;ch2[i]!='\0';i++)
	{
		ch1[len] = ch2[i];
		len++;
	}
	ch1[len] = '\0';
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
	
	concate(str1,str2);
	
	printf("\nValue of str1 after concatination = %s",str1);
	printf("\nValue of str2 after concatination = %s",str2);
	return 0;
}
