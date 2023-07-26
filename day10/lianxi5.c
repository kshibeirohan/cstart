#include<stdio.h>
void main()
{
	int a,b,c,l,r,i,j,n,s=0;
	scanf("%d%d",&l,&r);
	int arr[r-l];
	for(i = l;i <= r;i++)
	{
		int flag = 1;
		n=i;
		b=n%100;
		a=n/100;
		for(j=2;j<=a/2;j++)
		{
			if(a%j==0)
				flag=0;
		}
		for(j=1;j<b;j++)
		{
			if(j*j==b && flag==1 && i%6==0)
			{
				arr[s]=i;
				s++;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		if(i!=(s-1))
			printf("%d ",arr[i]);
		else
			printf("%d",arr[i]);
	}
	printf("\n%d",s);
}