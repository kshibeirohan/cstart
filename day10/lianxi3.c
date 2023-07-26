#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
void change(char ch[][100],int n)
{
	int i,k;
	for(k=0;k<n;k++)
	{
		if(ch[k][0]>='a'&&ch[k][0]<='z')
				ch[k][0]=ch[k][0]-32;
		for(i=1;i<strlen(ch[k]);i++)
		{
			if(ch[k][i]>='A'&&ch[k][i]<='Z')
				ch[k][i]=ch[k][i]+32;
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i-1;k++)
		{
			if(strcmp(ch[k],ch[k+1])>0)
				swap(ch[k],ch[k+1]);
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",ch[i]);
}
void swap(char *a,char *b)
{
	char temp[100]={'\0'};
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}
void main()
{
	char ch[100][100]={'\0'};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",ch[i]);
	}
	change(ch,n);
	
}