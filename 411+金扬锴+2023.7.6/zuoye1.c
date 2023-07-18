#include<stdio.h>
void strsort(char *a,int n)
{
	char *p = a;
	int i,j;
	char t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			
			 if( *(p+j) > *(p+j+1) )
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
void main()
{
	int i;
	char arr[50]={'\0'};
		scanf("%s",arr);
	
	strsort(arr,50);
	
	for(i=0;i<50;i++)
		printf("%c",arr[i]);
}