#include<stdio.h>
int func(int n)
{
	int a,b;
    //设置时间种子
    srand(time(NULL));
	//生成随机数
	if(n==6)
		a=rand()%6+1;
    else
		a=rand()%13+1;
	return a;
}
void main()
{
	printf("行:%d 列:%d\n",func(6),func(13));
}
