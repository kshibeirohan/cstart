#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c) && (a+c>b)&&(c+b>a))
	{
		printf("可以构成三角形");
	}
	else
	{
		printf("不可以构成三角形");
	}
}
