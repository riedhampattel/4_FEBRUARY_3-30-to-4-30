#include<stdio.h>
int main()
{
	int num;
	up:
	printf("\nEnter the number = ");
	scanf("%d",&num);//0
	printf("\nValue of number = %d",num);
	if(num==0)
	{
		goto down;
	}
	goto up;
	down :
	return 0;
}
