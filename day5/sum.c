#include<stdio.h>
void main()
{
	int i,sum=0,n;
	printf("输入数组长度");
	scanf("%d",&n);
	int buf[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&buf[i]);
		sum += buf[i];
	}
	printf("数组元素之和为%d",sum);
}