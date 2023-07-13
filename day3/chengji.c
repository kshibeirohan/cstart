#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a>100 || a<0)
	{
		printf("输入的成绩有误");
	}
	else if(a>=90)
	{
		printf("考试等级为A");
	}
	else if(a>=80)
	{
		printf("考试等级为B");
	}
	else if(a>=60)
	{
		printf("考试等级为C");
	}
	else
	{
		printf("考试等级为D");
	}

}
