#include<stdio.h>
#include<string.h>
void main()
{
	char ch[20][100];
	int i,n,max=0,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&ch[i]);
		if(strlen(ch[i])>max)
		{
			max = strlen(ch[i]);
			m=i;
		}
	}
	printf("%s",ch[m]);
}