#include <stdio.h>
 
int m,n;
void puddles(int a[][n],int M,int N);
 
int main()
{
	int i,j,count;
	scanf("%d%d",&m,&n);
	int a[m][n];
	//循环赋值
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//找到水洼
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(1==a[i][j])
			{
				puddles(a,i,j);
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
 
void puddles(int a[][n],int M,int N)
{
	int i,j;
	//将水坑清零
	a[M][N]=0;
	//遍历它周围再清零
	for(i=-1;i<=1;i++)
	{
		for(j=-1;j<=1;j++)
		{
			//避免过界
			if(M+i>=0&&M+i<m&&N+j>=0&&N+j<n)
			{
				if(1==a[M+i][N+j])
				{
					puddles(a,M+i,N+j);
				}
			}
		}
	}
}