#include<stdio.h>
void main()
{
	int a[]={1,5,6,8,12,25,32};
	int left=0,right,mid,n;
	scanf("%d",&n);
	right=sizeof(a)/sizeof(a[0]);
	for(;left<=right;)
	0{
		mid=(left+right)/2;
		if(a[mid]>n)
		{
			right=mid-1;
		}
		else if(a[mid]<n)
		{
			left=mid+1;
		}
		else
		{
			printf("找到了在第%d位",mid);
			break;
		}
	}	
	if(left>right)
		printf("没找到");
}