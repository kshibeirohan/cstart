#include<stdio.h>
void main()
{
	int n,m=0;
	
	scanf("%d",&n);
	
	for(;n;)
	{
		m=m*10+n%10;
		n=n/10;
	}
	
	printf("%d",m);
}