#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","w");
	fprintf(fp1,"Hello this is second attempt");
	fclose(fp1);
	return 0;
}
