#include<stdio.h>
struct t4
{
	char c[10];
	int a;
    char ch;
};
void main()
{
	struct t4 t;
	printf("%ld",sizeof(t));
}