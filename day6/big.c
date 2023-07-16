#include<stdio.h>
void main()
{
	char ch[10000]={'\0'};
	scanf("%s",&ch);
	if((ch[strlen(ch)-1]-'0')%2)
		printf("NO\n");
	else
		printf("YES\n");
}