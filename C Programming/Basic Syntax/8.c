#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,choice;
	printf("\n1.Square");
	printf("\n2.Cube");
	printf("\n3.Square root");
	printf("\n4.Power");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the number = ");
			scanf("%d",&n1);//3
			printf("\nSquare of %d is %d",n1,n1*n1);
		break;
		case 2:
			printf("\nEnter the number = ");
			scanf("%d",&n1);
			printf("\nCube of %d is %d",n1,n1*n1*n1);
		break;
		case 3:
			printf("\nEnter the number = ");
			scanf("%d",&n1);
			int ans = sqrt(n1);			
			printf("\nSquare root of %d is %d",n1,ans);
		break;
		case 4:
			printf("\nEnter the base = ");
			scanf("%d",&n1);//2
			printf("\nEnter the exponent = ");
			scanf("%d",&n2);//5
			ans = pow(n1,n2);
			printf("\nThe power is = %d",ans);
		break;
	}
	
	return 0;
}
