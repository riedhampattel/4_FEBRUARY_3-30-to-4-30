#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],ans[10][10];
	int size,i,j,k,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter the element in array a");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the element in array b");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Division");
	printf("\n4.Multiplication");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nAddition array\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				if(i==size/2)
				{
					printf(" +  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				if(i==size/2)
				{
					printf(" =  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 2:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nSubtraction array\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				if(i==size/2)
				{
					printf(" -  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				if(i==size/2)
				{
					printf(" =  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 3:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] / b[i][j];
				}
			}
			printf("\nDivision array\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				if(i==size/2)
				{
					printf(" /  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				if(i==size/2)
				{
					printf(" =  ");
				}
				else
				{
					printf("    ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 4:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = 0;
					for(k=0;k<size;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
					}
				}
			}
			printf("\nMultiplication array\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				if(size/2==i)
				{
					printf(" + ");
				}
				else
				{
					printf("   ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				if(size/2==i)
				{
					printf(" = ");	
				}
				else
				{
					printf("   ");
				}
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
	}
	return 0;
}
