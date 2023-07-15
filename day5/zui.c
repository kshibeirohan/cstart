#include<stdio.h>
void main()
{
	int i,max,min,n;
	printf("输入数组长度");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	max=a[0];
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	
	printf("max=%d,min=%d",max,min);
	
}