#include<stdio.h>
#include<string.h>
void main()
{
	char *str = "hello world";
    char *str1 ="hello world";
    int ret = strcmp(str1,str);
	printf("%d",ret);
}