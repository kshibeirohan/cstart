#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%dx%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
}