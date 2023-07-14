#include<stdio.h>
void main()
{
	int i,j,max,x=0,sum,y=0,k;
	int a[11]={1,2,6,8,9,10,-2,11,3,4,5};
	max=a[0];
	sum=a[0];
	for(i=1;i<11;i++)
	{
		if(sum+a[i]>sum)
		{
			sum=sum+a[i];			
		}
		else
		{
			x=i+1;
			sum=a[i]-a[i];
		}
		if(max<sum)
		{
			max=sum;
			k=x;
			y=i;
		}
	}
	printf("sum=%d\n",max);
	for(k;k<=y;k++)
		printf("%d",a[k]);
	
	
}