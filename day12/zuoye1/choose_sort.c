#include<stdio.h>
void choose_sort(int a[], int n)
{
	int i, j, t, max, index;

	for(i=0; i<n-1; i++)	//需要选择 n-1次
	{
		max = a[0], index = 0;	//每一次选择之前，需要重置最大值和最大值下标
		/*
				选择 出当前剩下数的最大值和最小值，
				且每次找最大值的比较次数会随着选择好的最大值的次数的增加而减少
				j<10-i  上述就是为什么要减去i的原因
		*/
		for(j=0; j<n-i; j++)	
		{
			if(max < a[j])
			{
				max = a[j];
				index = j;
			}
		}

		//每次选择出的最大值和最大值下标 与 剩下数的最后面的那个位置进行交换
		t = a[index];
		a[index] = a[n-1-i];
		a[n-1-i] = t;
	}

}