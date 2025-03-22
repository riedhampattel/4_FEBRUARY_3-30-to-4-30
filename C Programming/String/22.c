#include<stdio.h>
int main()
{
	char str[100];
	int word=1,i;
	printf("\nEnter the str = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!='\0' && str[i-1]!=' ')
		{
			word++;
		}
	}
	printf("\nNumber of words = %d",word);
	return 0;
}
