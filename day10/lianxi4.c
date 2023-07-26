#include<stdio.h>
void main()
{
	int n,i,j,t,m,sum=0;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<m;i++)
		sum += a[i];
	printf("%.2f",(float)sum/m);
}