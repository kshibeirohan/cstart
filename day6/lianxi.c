#include<stdio.h>
void main()
{
	int l,m,i,j,a,b,sum=0;
	scanf("%d%d",&l,&m); 
	int x,y;
	int c[l+1];
	for(i=0;i<=l;i++)
	{
		c[i]=1;
	}
	while(m--)
	{
		scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++)
		{
			c[i]=0;
		}
	}
	for(i=0;i<=l;i++)
	{
		if(c[i]==1)
		{
			sum += 1;
		}
	}
	printf("%d",sum);
}