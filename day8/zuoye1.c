#include<stdio.h>
void put(int n)
{
	if(n==0)
		return;
	else{
		put(n/10); 
		printf("%d ",n%10);
	
	}
}
void main()
{
	int m;
	scanf("%d",&m);
	put(m);
}