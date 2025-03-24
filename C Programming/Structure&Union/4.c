#include<stdio.h>
struct demo
{
	int a;
	char b;
};
union uni
{
	int c;
	char d;
};
int main()
{
	struct demo d;
	union uni u;
	d.a = 68;
	u.c = 68;
	
	d.b = 'E';
	u.d = 'E';
	
	u.c = 68;
	printf("\nValues of structure");
	printf("\na = %d",d.a);
	printf("\nb = %c",d.b);
	
	printf("\nValues of union");
	printf("\nc = %d",u.c);
	printf("\nd = %c",u.d);
	return 0;
}
