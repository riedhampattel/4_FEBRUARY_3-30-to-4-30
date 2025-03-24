#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grade;
};
int main()
{
	struct Student s[100];
	int size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the details of student %d",i+1);
		printf("\nRoll no = ");
		scanf("%d",&s[i].roll);
		printf("\nPercentage = ");
		scanf("%f",&s[i].per);
		printf("\nGrade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<size;i++)
	{
		printf("\nDetails of student %d",i+1);
		printf("\nRoll no = %d",s[i].roll);
		printf("\nPercentage = %.2f",s[i].per);
		printf("\nGrade = %c",s[i].grade);
	}
	return 0;
}
