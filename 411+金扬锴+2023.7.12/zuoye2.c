#include<stdio.h>
struct achievement
{
	char name[10];
	int math;
	int english;
	int chinese;
};

void main()
{
	struct achievement ach[10];
	
	int i,max=0,k;
	printf("请输入10名学生的信息");
	
	for(i=0;i<10;i++)
	{
		scanf("%s",ach[i].name);
		scanf("%d %d %d",&ach[i].math,&ach[i].english,&ach[i].chinese);
	}
	
	for(i=0;i<10;i++)
	{
		if((ach[i].math+ach[i].english+ach[i].chinese)/3 > max)
		{
			max=(ach[i].math+ach[i].english+ach[i].chinese)/3;
			k=i;
		}
	}
	printf("%s",ach[k].name);
	printf("平均分：%d 数学：%d 英语：%d 语文：%d\n",max,ach[k].math,ach[k].english,ach[k].chinese);
}