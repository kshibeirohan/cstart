#include<stdio.h>
void main()
{
	int i,j,k,min,n,t;
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		min=a[0];
		k=0;
		for(j=1;j<n-i;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				k=j;
			}
		}
		t=a[k];
		a[k]=a[j-1];
		a[j-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	
}