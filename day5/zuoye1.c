#include<stdio.h>
void main()
{
	int i,k,n,t;
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}