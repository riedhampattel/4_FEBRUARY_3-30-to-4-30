#include<stdio.h>
int main()
{
	int row,i,j;
	char ch;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//6
	for(i=0;i<row;i++)//7
	{
		for(j=0;j<=i;j++)
		{
			switch(i%5)
			{
				case 0:
					printf("a ");
				break;
				case 1:
					printf("e");
				break;
				case 2:
					printf("i");
				break;
				case 3:
					printf("o");
				break;
				case 4:
					printf("u");
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
