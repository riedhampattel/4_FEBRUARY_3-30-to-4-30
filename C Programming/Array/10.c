//Write a c program to take a size and elements of an array from the user and display max and min value from an array without sorting them
#include<stdio.h>
int main()
{
	int size,arr[100],min,max,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for(i=0;i<size;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
		}
		if(max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("\nMax value = %d",max);
	printf("\nMin value = %d",min);
	return 0;
}
