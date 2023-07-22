#include <stdio.h>
//插入排序
void Insert_sort(int a[] ,int n)
{
	int i, j, temp;
	
	for (i = 1;i < n;i++)
	{
		temp = a[i];
		if (a[i] < a[i - 1])
		{
			for (j = i - 1;temp < a[j];j--)
			{
				a[j + 1] = a[j];
			}
			a[j + 1] = temp;
		}	
	}
}