#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("second.txt","a");
	fprintf(fp1,"\nHello this is fourth attempt");
	fclose(fp1);
	return 0;
}
