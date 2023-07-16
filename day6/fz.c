#include<stdio.h>
void main()
{
	char ch[50]={'\0'};
	int i,t,k;
	for(i=0;i<50;i++)
	{
		scanf("%c",&ch[i]);
		if(ch[i]=='\n')
		{
			k=i;
			break;
		}
	}
	for(i=0;i<=(k-1)/2;i++)
	{
		t=ch[i];
		ch[i]=ch[(k-1)-i];
		ch[(k-1)-i]=t;
	}
	for(i=0;i<=(k-1);i++)
		printf("%c",ch[i]);
}