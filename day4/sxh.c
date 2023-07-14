#include<stdio.h>
void main()
{
	int n,g=0,m=0,k;
	scanf("%d",&n);
	k=n;
	for(;n>0;)
	{
		g=n%10;
		m=m+g*g*g;
		n=n/10;
	}
	if(m==k)
		printf("%d是水仙花数",k);
	else
		printf("%d不是水仙花数",k);
}