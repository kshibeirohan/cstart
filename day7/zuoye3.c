#include<stdio.h>
int primefactor(int n)
{
	int i=2;
		while(i<=n)
		{
			if(n%i==0 && n/i!=1)
			{
				printf("%d*",i);
				n=n/i;
			}
			else if(n%i==0 && n/i==1)
			{
				printf("%d",i);
				break;
			}
			else if(n%i!=0 && n>0)
			{
				i++;
			}
		}	
}
void main()
{
	int n;
	scanf("%d",&n);
	primefactor(n);
}