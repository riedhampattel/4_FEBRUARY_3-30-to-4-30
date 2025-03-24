#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grade;
};
int main()
{
	struct Student s,s1;
	printf("\nEnter the roll no = ");
	scanf("%d",&s.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s.per);
	printf("\nEnter the grade = ");
	scanf(" %c",&s.grade);
	
	printf("\nRoll no. = %d",s.roll);
	printf("\nPercentage = %.2f",s.per);
	printf("\nGrade = %c",s.grade);
	
	printf("\nEnter the roll no = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s1.per);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.per);
	printf("\nGrade = %c",s1.grade);
	return 0;
}
