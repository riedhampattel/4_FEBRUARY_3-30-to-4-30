#include<stdio.h>
void normal(int arr[],int size)
{
	int i;
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void reverse(int arr[],int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);	
	}	
}
int main()
{
	int size,a[100],i,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1.Normal sequence");
	printf("\n2.Reverse sequence");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			normal(a,size);
		break;
		case 2:
			reverse(a,size);
		break;
	}
	return 0;
}
