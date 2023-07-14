#include<stdio.h>
void main()
{
	int i,j,sum,x,y,flag=0;
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
	{
		sum=0;
		for(j=i;j<=(x/2+1);j++)
		{
			sum += j;
			y=i;
			if(sum == x)
			{
				printf("%d = ",x);
				flag=1;
				for(y;y<=j;y++)
				{
					if(y!=j)
						printf("%d+",y);
					else
						printf("%d",y);				
				}
				printf("\n");
			}
		}
	}
	if(flag==0)
		printf("没有");
}