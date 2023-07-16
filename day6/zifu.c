#include<stdio.h>
void main()
{
	char ch[50];
	int i;
	for(i=0;i<50;i++)
	{
		scanf("%c",&ch[i]);
		if( (ch[i]>='A'&&ch[i]<'Z') || (ch[i]>='a'&&ch[i]<'z'))
		{
			ch[i] += 1;
		}
		else if(ch[i]=='Z' || ch[i]=='z')
		{
			ch[i] -= 25;
		}
		printf("%c",ch[i]);
		if(ch[i]=='\n')
		{
			break;
		}
	}
	
}