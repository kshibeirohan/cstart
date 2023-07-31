#include<stdio.h>
void main()
{
	char *s[]={"one","two","three"},*p;
	p=s[1];
	printf("%c,%s\n",*(p+4),s[0]);
	
	
}
