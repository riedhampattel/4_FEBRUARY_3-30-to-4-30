#include<stdio.h>
int main()
{
	char str[100];
	char vowel[100],con[100];
	int vowel1=0,con1=0,j=0,k=0,i;
	printf("\nEnter the value in str = ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
		{
			vowel1++;
			vowel[j] = str[i];
			j++;
		}
		else
		{
			con1++;
			con[k] = str[i];
			k++;
		}
	}
	printf("\nVowels = %d",vowel1);
	printf("\nConsonants = %d",con1);
	
	printf("\n\nVowels = ");
	for(i=0;i<j;i++)
	{
		printf("%c ",vowel[i]);
	}
	printf("\nConsonants = ");
	for(i=0;i<k;i++)
	{
		printf("%c ",con[i]);
	}
	return 0;
}
