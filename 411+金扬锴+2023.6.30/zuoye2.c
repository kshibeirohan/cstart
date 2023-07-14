#include<stdio.h>
void main()
{
	int i,j,n,m,t;
	scanf("%d %d",&n,&m);

	int a[n],b[m],c[n+m];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}

	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);	
		c[i+n]=b[i];
	}

	for(i=0; i<m+n-1; i++)		
	{
    
		for(j=0; j<m+n-i-1; j++)   
		{
			if(c[j] > c[j+1])
			{
				t = c[j];
				c[j] = c[j+1];
				c[j+1] = t;
			}
		}
	}   
	for(i=0;i<n+m;i++)
		printf("%d",c[i]);
}