#include<stdio.h>
void main()
{
	int max,min,i,j,n,m,k=0,x,sum=0,flag=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			max=a[0][0];
		}
	}
	while(k<n)
	{
	
		for(j=0;j<n;j++)
		{
			if(max<a[k][j])
			{
					max=a[k][j];
					x=j;
			
			}
		}
		for(i=0;i<n;i++)
		{
			if(max<a[i][x])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			sum+=1;
	k += 1;
	}
	printf("山顶元素个数:%d",sum);
}