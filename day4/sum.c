#include<stdio.h>
void main()
{
	int i=100,sum=0;
	while(i<200)
	{
		if(i%2==0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n",sum);
}
