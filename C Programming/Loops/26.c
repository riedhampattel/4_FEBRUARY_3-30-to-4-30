#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%7==0)
		{
			continue;
		}
		printf("\n%d",i);
	}
	return 0;
}
