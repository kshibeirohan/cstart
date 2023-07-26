#include<stdio.h>
#include<string.h>
void change(char *ch)
{
	int i;
	for(i=0;i<strlen(ch);i++)
	{
		if(*(ch+i)>='A'&&*(ch+i)<='Z')
			*(ch+i)=*(ch+i)+32;
		else if(*(ch+i)>='a'&&*(ch+i)<='z')
			*(ch+i)=*(ch+i)-32;
	}
}
void main()
{
	char a[1000]={'\0'};
	scanf("%s",a);
	change(a);
	printf("%s",a);
}