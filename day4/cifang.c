#include<stdio.h>
void main()
{
	int i,k,n,m;
	scanf("%d %d",&k,&n);
	m=k;
	for(i=1;i<n;i++)
	{
		m*=k;
	}
	printf("%d",m);
}
