#include<stdio.h>
int feibo(int n)
{
	int i,a[n];
	a[0]=1;
	a[1]=1;
	if(n==1 || n==2)
		return 1;
	else
	{
		for(i=2;i<n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		return a[n-1];
	}
}
void main()
{
	int m;
	scanf("%d",&m);
	printf("第%d项的斐波那契数是%d\n",m,feibo(m));
}