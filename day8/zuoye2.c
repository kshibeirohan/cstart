#include<stdio.h>
int M,N;
int pubble(int a[][N],int m,int n)
{
	int i,j;
	a[m][n]=0;
	for(i=-1;i<=1;i++)
	{
		for(j=-1;j<=1;j++)
		{
			if(m+i>=0 && m+i<M && n+j>=0 && n+j<N)
			{
				if(a[m+i][n+j] == 1);
					pubble(a,m+i,n+j);
			}
		}
	}
}

void main()
{
	int i,j,s=0;
	scanf("%d %d",&M,&N);
	int arr[M][N];
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j] == 1)
			{
				pubble(arr,i,j);
				s++;
			}
		}
	}
	printf("水坑数%d",s);
}