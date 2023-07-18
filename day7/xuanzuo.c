#include<stdio.h>
int radicalsign(int n)
{
	int left=1,right=n,mid,min=n,index;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(mid*mid>n)
		{
			if((mid*mid-n)<min)
			{
				min=(mid*mid-n);
				index=mid;
			}
			right=mid-1;
		}
		else if(mid*mid<n)
		{
			if((n-mid*mid)<min)
			{
				min=(mid*mid-n);
				index=mid;
			}
			left=mid+1;
		}
		else
		{
			index=mid;
			break;
		}
	}
	return index;
}
void main()
{
	int n,s;
	scanf("%d",&n);
	s=radicalsign(n);
	printf("%d",s);
}