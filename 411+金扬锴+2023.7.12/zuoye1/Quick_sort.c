#include <stdio.h>
/*
	a:数组的地址
	start:对某片段 快速排序 的 左边界
	end：对某片段 快速排序 的 有边界
*/
void QuicK_sort(int a[], int start, int end)
{
    if(start >= end)
        return ;
    
    int provid = a[start];
    int left = start;
    int right = end;
    
    while(left < right)
    {
        //一直向右移动 直到大于基准值
        while(left < right && a[left] <= provid)
            left++;
        //一直向左移动 直到小于基准值
        while(left < right && a[right] > provid)
            right--;
        //当left right 暂停移动的时候，且不相等 交换left和right对应的值
        if(left != right)
        {
            int t = a[left];
            a[left] = a[right];
            a[right] = t;
        }
    }
    //交换基准值，使得基准值的左边都比基准值小，基准值的右边都比基准值大
    if (start == left - 1 && a[start] > a[left])
	{
		a[start] = a[left];
		a[left] = provid;
	}
	else
	{
		a[start] = a[left-1];
		a[left-1] = provid;	
	}

    
    /*
    	通过上述 语句之后，出现了一条分割线，left - 1，
    	我们需要对left-1的左边进行快速排序
    	我们需要对left-1的右边进行快速排序
    */
    // 对左边进行快排
    QuicK_sort(a, start, left-2);
    // 对右边进行快排
    QuicK_sort(a, left, end);
    
}