#include<stdio.h>
void main()
{
	int i,j,n,m,x=0,y=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<=i;j++)
		{
			x=x*10+n;
		}
		y=y+x;
		x=0;
	}
	printf("%d",y);
}