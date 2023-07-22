#include<stdio.h>
int delchar(char *a,int n)
{
	char *p = a;
	int i,j,k,m=n,s=0;
	char t;
	for(i=0;i<n;i++)
	{
		k = i+1;
		for(j=i;j<n;j++)
		{
			if(*(p+i) != *(p+j))
			{
				*(p+k) = *(p+j);
				k++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i) == *(p+j))
			{
				return j-1;
			}
		}
		if(*(p+i+1) == '\0')
			return i;
	}
	return i;
}
void main()
{
	char arr[50]={'\0'};
	int i,n;
	scanf("%s",arr);
	n = delchar(arr,50);
	for(i=0;i<n+1;i++)
	{
		printf("%c",arr[i]);
	}
}