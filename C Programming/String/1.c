#include<stdio.h>
int main()
{
	int i;
	char ch[50] = "Hello World! How are you?";
	             //01234567891011
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
