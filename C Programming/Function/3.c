#include<stdio.h>
//without return type with argument
void multi(int n1,int n2);

void multi(int n1,int n2)
{
	int ans;
	ans = n1*n2;
	printf("\nThe multiplication = %d",ans);
}

int main()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n2);
	multi(n1,n2);
	return 0;
}
