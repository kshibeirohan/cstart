#include<stdio.h>
void main()
{
	int a[3][4];
	int (*p)[4] =a;
	p = a;
	p[0][0]=1;
	printf("%d",p[0][0]);
}