#include<stdio.h>
int main()
{
	char *s[]={"one","two","three"},*p;
	p=s[1];
	printf("%c,%s\n",*(p+1),s[0]);
}