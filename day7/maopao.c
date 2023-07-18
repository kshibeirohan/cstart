#include<stdio.h>
int Bubble(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Bubble(a,n);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}