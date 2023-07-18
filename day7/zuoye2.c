#include<stdio.h>
int sum(char str[],int n)
{
	int i,k=0,sum=0;
	
	for(i=0;i<n;i++)
	{
		if(str[i]>='0' && str[i]<= '9')
		{
			k=k*10+str[i]-48;
		}
		else
		{
			sum += k;
			k=0;
		}
		if(i==(n-1))
			sum += k;
	}
	
	return sum;
}
void main()
{
	int n,a;
	scanf("%d",&n);
	
	char str[n];
	scanf("%s",str);
	
	a=sum(str,n);
	printf("%d",a);
}