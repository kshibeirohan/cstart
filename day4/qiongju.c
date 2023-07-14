#include<stdio.h>
void main()
{
	int i,n,m,max,x;
	scanf("%d%d",&n,&m);
	if(n>m)
	{
		max = m;
		m=n;
		n=max;
	}
	for(i=n;i>=1;i--)
	{
		if( m%i==0 && n%i==0)
		{
			x=i;
			break;
		}
	}
	printf("最大公约数为%d",x);
	printf("最小公倍数为%d",m*n/x);
}
