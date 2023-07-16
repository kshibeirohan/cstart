#include<stdio.h>
void main()
{
	char ch[100]={'\0'};
	int i,t=0,k;
	for(i=0;i<100;i++)
	{
		scanf("%c",&ch[i]);
		if(ch[i] == 'A')
		{
			t=t+1;
		}
		if(ch[i]=='\n')
		{
			break;
		}
	}
	printf("%d",t);
}