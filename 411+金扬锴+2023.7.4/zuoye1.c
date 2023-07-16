#include<stdio.h>
int getlen(char a[])
{
	int len=0;
	while(a[len]!='\0')
	{
		len++;
	}
	return len;
}
void main()
{
	char str[50];
	scanf("%s",str);
	printf("%d",getlen(str));
}