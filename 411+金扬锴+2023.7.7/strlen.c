#include<stdio.h>
int mystrlen(const char *s)
{
	int i=0;
	
	while(*(s+i)!='\0')
		i++;
	return i;
}
void main()
{
	char *s="Hello World";
	int ret = mystrlen(s);
	printf("字符串长度:%d",ret);
}