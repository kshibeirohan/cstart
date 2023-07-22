#include<stdio.h>
#include"Bubble_sort.h"
#include"choose_sort.h"
#include"Insert_sort.h"
#include"Quick_sort.h"
enum sort
{
	Bubble = 1,
	choose,
	Insert,
	Quick
};
void main()
{
	int n,i,j;
	printf("请输入数组长度，和你想选择的排序方式\n");//冒泡为1，选择为2，插入为3，快排为4
	scanf("%d%d",&n,&j);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	switch(j)
	{
		case Bubble : 
			Bubble_sort(a, n);break;
		case choose :
			choose_sort(a, n);break;
		case Insert :
			Insert_sort(a, n);break;
		case Quick :
			QuicK_sort(a,0,n-1);break;
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	
}