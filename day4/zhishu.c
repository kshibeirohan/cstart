#include<stdio.h>
void main()
{
	int i,n,m=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			m += 1;
		}
	}
	if(m==0)
		printf("%d是质数",n);
	else
		printf("%d不是质数",n);
}