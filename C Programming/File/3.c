#include<stdio.h>
int main()
{
	FILE *fp1;
	char str[100];
	fp1 = fopen("second.txt","r");
	
	while(fgets(str,sizeof(str),fp1))
	{
		printf("%s",str);
	}
	fclose(fp1);
	return 0;
}
