#include<stdio.h>
void main()
{
	int i,j,x,y,flag=0;
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
	{
		
		for(j=i;j<=(x/2+1);j++)
		{
			y=i;
			if((i+j)*(j-i+1)/2==x)
			{
				flag=1;
				printf("%d ",x);
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