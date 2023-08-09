#include<stdio.h>
#include<stdlib.h>
/*int重命名为Elemtype*/
typedef int Elemtype;
/*
	双向链表类型为BiNode
	next指向下一个
	prev指向前一个
	data为当前数据
*/
typedef struct binode
{
  
  	Elemtype data;		
   
    struct binode *next;	
    struct binode *prev; 
}BiNode;
/*
	初始化new
*/
void creatBiListnode(BiNode **new,Elemtype data) 
{
	*new = malloc(sizeof(*new));
	(*new)->data = data;
	(*new)->next = NULL;
	(*new)->prev = NULL;
}
/*
	头插法
*/
BiNode *addBiListnode(BiNode *bilist , BiNode *new)
{
	static BiNode *end = NULL;
	
	if(bilist == NULL)
		bilist = new;
	else
	{
		end->next = new;
		new->prev = end;
	}
	end = new;
	
	return bilist;
}
/*
	按排序插入
*/
BiNode *addNodeToBiList(BiNode *bilist, BiNode *new)
{
       if ( bilist == NULL )
    	return new;
    
    BiNode *p = bilist;
    // 遍历整个链表
    while(p->next)
    {
        if (new->data <= p->data)
            break;
        
        p = p->next;
    }
    
    // 没找到 --- 作为尾节点插入
    if ( new->data > p->data )
    {
        p->next = new;
        new->prev = p;
    }
    else
    {
		// 头插
        if ( p == bilist )
        {
            new->next = p;
            p->prev = new;
            bilist = new;
        }
        else  // 中间插入
        {
            new->next = p;
            new->prev = p->prev;
            p->prev = new;
            new->prev->next = new;
        }
    }
    
    return bilist;
}
/*
	删除链表中的特定值
*/
BiNode *deleteDataFromBiList(BiNode *bilist, Elemtype x)
{
	BiNode *p = bilist;
	BiNode *pre = p;
	while(p)
	{
		if(p->data == x)
			break;
		pre = p;
		p = p->next;
	}
	if(p)
	{
		if(p == bilist)
		{
			bilist = bilist->next;
			bilist->prev = NULL;
		}
		else if(p->next)
		{
			pre->next = p->next;
			p->next->prev = pre;
		}
		else
			pre->next = NULL;
		free(p);
	}
	return bilist;
}
/*
	找到特定位
*/
BiNode *findBiListNode(BiNode *biList, int k)
{
    BiNode *p = biList;
    // 当还有剩余的结点 以及还没到k的时候 继续往后
    while(p && --k)
        p = p->next;

    return p;    
}
/*
	删除链表中特定位的值
*/
BiNode *deleteNodeFromBiList(BiNode *biList, int k)
{
    // 找到第 k 个结点 -- 没找到 p为NULL
    BiNode *p = findBiListNode(biList, k);
    
    // 如果p存在 p为第k个结点
    if ( p )
    {
        // 删除第一个
        if ( p == biList )
        {	
            // 链表只有一个结点
            if ( p->next == NULL )
                biList = NULL;
            else  // 链表不止一个
            {
                biList = p->next;
                p->next = NULL;
                biList->prev = NULL;
            }
        }
        else if ( p->next == NULL )  // 最后一个
        {
            p->prev->next = NULL;
            p->prev = NULL;
        }
        else
        {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            p->prev = NULL;
            p->next = NULL;
        }
        
        free(p);
    }   
    
    return biList;
}
/*
	判断链表是否为空
	为空返回1
	否则返回0
*/
int insertBiList(BiNode *bilist)
{
	if(bilist == NULL)
	{
		printf("链表为空\n");
		return 1;
	}
	else
	{
		printf("链表不为空\n");
		return 0;
	}
}
/*
	计算链表长度
*/
void lenofBiList(BiNode *bilist)
{
	BiNode *p = bilist;
	int n=0;
	while(p)
	{
		p = p->next;
		n++;
	}
	printf("链表长度:%d\n",n);
}
/*
	按值查找链表
	输出位数和值
*/
BiNode *findBiList(BiNode *bilist,int x)
{
	BiNode *p = bilist;
	
	while(p)
	{
		if(p->data == x)
			break;
	
		p = p->next;
	}
	return p;
}
/*
	尾插法
*/
BiNode *addBiListnode_r(BiNode *bilist , BiNode *new)
{
	
	if(bilist == NULL)
		bilist = new;
	else
	{
		new->next = bilist;
		bilist->prev = new;
	}
	bilist = new;
	
	return bilist;
}
/*
	旋转双向链表
*/
BiNode *circleBiList(BiNode *bilist , int n)
{
	BiNode *end = bilist;
	BiNode *first = bilist;
	while(end->next)
		end=end->next;
	while(n--)
	{
		end->next = first;
		first->prev = end;
		first = end;
		end=end->prev;
		end->next->prev = NULL;
		end->next = NULL;
	}
	return first;	
}

/*
	删除重复元素
*/
BiNode *deleterepeatNode(BiNode *bilist)
{
	BiNode *pre = bilist;
	BiNode *p = bilist->next;
	BiNode *n = pre;

	
}
/*
	打印链表
	p正向打印
	pre反向打印
*/
void printBiList(BiNode *bilist)
{
	BiNode *p = bilist;
	BiNode *pre = NULL;
	while(p)
	{
		printf("%d ",p->data);
		pre = p;
		p=p->next;
	}
	printf("\n");
	while(pre)
	{
		printf("%d ",pre->data);
		pre = pre->prev;
	}
	printf("\n");
}

/*
	销毁链表
*/
BiNode *destoryBiList(BiNode *bilist)
{
	BiNode *p = bilist;
	
	while(bilist)
	{
		//保存下一个销毁的地址
		p = bilist->next;
		//销毁第一个结点
		bilist->next = NULL;
		bilist->prev = NULL;
		free(bilist);
		//bilist指向下一个销毁的结点
		bilist = p;
	}
	return bilist;
	
}

void main()
{
	Elemtype data;
   
	BiNode *bilist = NULL;
	//BiNode *p = NULL;
	BiNode *new = NULL;
    while(1)
    {
         
        scanf("%d", &data);
        if (data == 0)
        {
            printf("data input OK\n");
            break;
        }
        
        creatBiListnode(&new, data);
	
        bilist = addNodeToBiList(bilist, new);        
    }   
	lenofBiList(bilist);
    //insertBiList(bilist);
	//*p=findBiList(bilist,5);
	bilist = deleterepeatNode(bilist);
	//bilist = circleBiList(bilist,2);
	//bilist = deleteNodeFromBiList(bilist,3);
	//bilist = deleteDataFromBiList(bilist,1);
    printBiList(bilist);
    
	destoryBiList(bilist);
}