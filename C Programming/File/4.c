#include<stdio.h>
struct Student
{
	int roll;
	char name[100];
	char grade;
}s[100];
int num;
int main()
{
	int choice;
	up :
	printf("\n1.Add students");
	printf("\n2.Display students");
	printf("\n3.Display particular student");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add();
		break;
		case 2:
			displayall();
		break;
		case 3:
			display();
		break;
	}
	char ch;
	printf("\nPress 'Y' to continue and 'N' to exit = ");
	scanf(" %c",&ch);
	if(ch=='Y' || ch=='y')
	{
		goto up;
	}
	else
	{
		goto down;
	}
	down:
	return 0;
}
void add()
{
	int i;
	FILE *fp1;
	fp1 = fopen("student.txt","a");
	printf("\nEnter the number of students = ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter the details of student %d",i+1);
		printf("\nRoll = ");
		scanf("%d",&s[i].roll);
		printf("\nName = ");
		scanf("%s",s[i].name);
		printf("\nGrade = ");
		scanf(" %c",&s[i].grade);
		fprintf(fp1,"%d   %s   %c\n",s[i].roll,s[i].name,s[i].grade);
	}
	fclose(fp1);
}
void displayall()
{
	char str[100];
	FILE *fp1;
	fp1 = fopen("student.txt","r");
	printf("----------------------------");
	printf("\nRoll  name  grade\n");
	printf("----------------------------\n");
	while(fgets(str,sizeof(str),fp1))
	{
		printf("%s",str);
	}
}
void display()
{
	char temp[3];
	char str[100];
	int flag=0,i;
	FILE *fp1;
	printf("\nEnter the roll = ");
	scanf("%s",&temp);//101
	fp1 = fopen("student.txt","r");
	while(fgets(str,sizeof(str),fp1))
	{
		flag=0;
		for(i=0;i<=2;i++)
		{
			if(str[i]==temp[i])
			{
				flag++;
			}
		}
		if(flag==3)
		{
			printf("\n%s",str);
		}
	}
	if(flag!=3)
	{
		printf("\nData doesn't exist");
	}
}