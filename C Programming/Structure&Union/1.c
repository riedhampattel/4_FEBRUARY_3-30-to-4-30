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
	s.roll=101;
	s.per=98.56;
	s.grade='A';
	
	printf("\nRoll no. = %d",s.roll);
	printf("\nPercentage = %.2f",s.per);
	printf("\nGrade = %c",s.grade);
	
	s1.roll=102;
	s1.per=48.56;
	s1.grade='B';
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.per);
	printf("\nGrade = %c",s1.grade);
	return 0;
}
