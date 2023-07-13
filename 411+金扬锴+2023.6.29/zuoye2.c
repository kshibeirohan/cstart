#include<stdio.h>
void main()
{
	int i=0,n;
	scanf("%d",&n);
	while(n)
	{
		if(n%2==1)
		{
			i += 1;
		}
		n /= 2;
	}
	printf("有%d个1",i);
}
