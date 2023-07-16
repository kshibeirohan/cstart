#include<stdio.h>
void main()
{
	int max,min,i,j,n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			max=a[0][0];
			min=a[0][0];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(max<a[i][j])
				max=a[i][j];
			if(min>a[i][j])
				min=a[i][j];
		}
	}
	printf("max=%d min=%d\n",max,min);

}