#include<stdio.h>
void main()
{
	int i,n,m,max,a=0,b=0;
	scanf("%d%d",&n,&m);
	if(n>m)
	{
		max = m;
		m=n;
		n=max;
	}
	i=m % n;
	b=m;
	for(;i;)
	{
		a=i;
		i=b%i;
		b=a;
	}
	printf("最大公约数为%d",b);
	printf("最小公倍数为%d",m*n/b);
}