#include<stdio.h>
char *gets(char *s);
void main()
{
	char ch[100]={'\0'};
	char *(*p)(char *) = gets;
	p(ch);
	printf("%s",ch);
}
