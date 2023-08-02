#include <stdio.h>
#include <stdlib.h>

// 假设 1 3 5 7 9 是一个线性表
typedef int Elemtype;	//Elemtype 是数据元素的类型

struct node
{
    //保存数据元素		//数据域  
  	Elemtype data;		//保存数据元素
    //保存逻辑关系		//指针域
    struct node *next;	//保存下一个数据元素的地址
    //struct node *prev;	
};

void crateListNode(struct node **new, Elemtype data)
{
    *new = malloc(sizeof(struct node));
    (*new)->data = data;
    (*new)->next = NULL;
}

// 尾插法
void addNodeToList(struct node **list, struct node *new)
{
    // end 指向单链表的最后一个结点
    static struct node *end = NULL;
    // 链表为空
    if (*list == NULL)
    {
        // 链表为空的时候，第一个结点就是你加入进来的结点
        *list = new;
        end = *list;
    }
    else
    {	
        // 最后一个的下一个指向新加入的结点
        end->next = new; 
        end = new;
    }    
}

struct node * addNodeToSortList(struct node *list, struct node *new)
{
    // 如果list 为NULL 此时 new 就是第一个
    if ( list == NULL )
        return new;
    // 遍历指针
    struct node *p = list;
    struct node *pre = p;
    
	// 1.从链表中找一个比new结点中数据 更大的结点
    while(p)
    {
        // 如果链表中的结点数据比待插入的大 说明此时的p就是第一个比new大的结点
        if( p->data > new->data )
            break;
        
        // pre 先记录 p 的位置
        pre = p;
        // p再往后进行遍历
        p = p->next;
    }
    
    // 2.插入
    if ( p == list )
    {
        new->next = p;
        list = new;
    }
    else
    {
        pre->next = new;
        new->next = p;
    }
    
    return list;
}

//将新添加的结点放进链表的头部  头插法
void addNodeToListTail(struct node **list, struct node *new)
{
    // 链表为空
    if (*list == NULL)
        // 链表为空的时候，第一个结点就是你加入进来的结点
        *list = new;
    else
    {	
        new->next = *list;
        *list = new;
    }    
}

Elemtype kToSortList(struct node *first,Elemtype x) //求倒数第几个数
{
	struct node *p=first;
	struct node *pre=first;
	int n=1,s=0;
	while(pre != NULL)
	{
		s += 1;
		pre =pre->next;
	}
	if(x>s)
		return -1;
	while(n != s-x+1)
	{
		p=p->next;
		n += 1;
	}
	return p->data;
}


void printList(struct node *first)
{
    struct node *p = first;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 使用 递归的方式  printList_r 访问链表
void printList_r(struct node *first)
{
	// 如果链表存在 就访问
	struct node *p = first;
    if(p)		//顺序访问
	{
		// 访问
		printf("%d ", p->data);
		
		// 对于 剩下的 以p为首的结点 构成了一个新的链表
		p = p->next;
		
		// 以访问链表的方式来访问 以p为首的新的链表
		printList_r(p);
	}
	
	/*
	if(p)		//逆序访问
	{		
		// 以访问链表的方式来访问 以p为首的新的链表
		printList_r(p->next);
		
		// 访问
		printf("%d ", p->data);
	}
	*/
}

void destoryList(struct node * first)
{
	struct node *p = first;
	// 如果链表存在 才能被销毁
	while(first)
	{
		// 保存 待销毁的结点地址
		p = first->next;
		
		// 销毁第一个结点
		first->next = NULL;
		free(first);
		
		// first 指向待销毁的结点
		first = p;
	}
	
}

void destoryList_r(struct node * first)
{
	struct node *p = first;
	// 如果链表存在 才能被销毁
	if(first)
	{
		// 保存 待销毁的结点地址
		p = p->next;
				
		// 销毁第一个结点
		first->next = NULL;  // 将指针域设置为NULL
		free(first);
		
		// 销毁剩下的结点
		destoryList_r(p);
	}
	
}

int main()
{   
    Elemtype data,m;
    // first 指向链表的第一个结点
    struct node *first = NULL;
    // new 指向新创建的结点
    struct node *new = NULL;
    while(1)
    {
         // 1.输入数据元素
        scanf("%d", &data);
        if (data == 0)
        {
            printf("data input OK\n");
            break;
        }
        
        // 2.将数据元素包装成一个结点 struct node
        crateListNode(&new, data);
		

        // 3.将结点添加进入链表中 -- first 来表示是第一个
        //addNodeToList(&first, new);  
		first = addNodeToSortList(first, new);		
    }   
    m=kToSortList(first,1);
	printf("倒数第3个数为:%d\n",m);
    // first 就指向了 单链表
    printList_r(first);
	
	// 销毁整个链表
	destoryList_r(first);
    
    return 0;
}