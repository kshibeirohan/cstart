#include<stdio.h>
int gys(int n,int m)
{
	int i,a;
for(i=n; i>=1; i--)
{
    if( n % i == 0 && m % i == 0)
    {
           a=i;
           break;
    }
}
return a;
}
void main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("最大公约数%d\n",gys(n,m));
}