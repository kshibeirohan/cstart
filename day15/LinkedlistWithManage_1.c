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

typedef struct ManageNode
{
    // 保存链表结点个数
    int listNum;
    
    // 保存链表的第一个结点
    struct node *first;
    // 保存链表的最后一个结点
    struct node *last;
}Manage;

// 创建链表之前 先初始化一个管理结点
Manage *createManageNode()
{
    Manage * MList = (Manage *)malloc(sizeof(Manage));
    MList->listNum = 0;
    MList->first = NULL;
    MList->last = NULL;
    
    return MList;
}

void crateListNode(struct node **new, Elemtype data)
{
    *new = malloc(sizeof(struct node));
    (*new)->data = data;
    (*new)->next = NULL;
}

void addNodeToList(Manage *MList, struct node *new)
{
    // 表示是一个空链表
    if ( MList->listNum == 0 )        
        MList->first = new;    
    else  // 尾插
        MList->last->next = new;  
    
    MList->last = new;
    MList->listNum++;
}

void addNodeToManageSortList(Manage *MList, struct node *new)
{
    if ( MList->first == NULL )
    {
        MList->first = new;
        MList->last = new;
    }
    else
    {
        // 1.找插入位置
        struct node *p = MList->first;
        struct node *pre = MList->first;
        while(p)
        {
            if ( p->data > new->data)
                break;
            
            pre = p;
            p = p->next;
        }
        
        // 找到了
        if ( p )
        {
            if ( p == MList->first )
            {
                new->next = MList->first;
                MList->first = new;
            }
            else
            {
                pre->next = new;
                new->next = p;
            }
        }
        else
        {
            MList->last->next = new;
            MList->last = new;
        }
    }
    
    MList->listNum++;
}

Elemtype kToManageSortList(Manage *MList,Elemtype x)
{
	struct node *p=MList->first;
	Manage *pre = NULL;
	int n=1;
	if(n == MList->listNum-x+1)
		return p->data;
	else if(p)
	{
		p=p->next;
		pre=p;
		n += 1;
		kToManageSortList(pre,x);
	}
	
}

void printList(Manage *MList)
{
    printf("List Node NUM = %d\n", MList->listNum);
    struct node *p = MList->first;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{   
    Elemtype data,n;
    // 创建一个管理结点
    Manage *MList = createManageNode();
    // new 指向新创建的结点
    struct node *new = NULL;
    while(1)
    {
        // 1.输入数据元素
        scanf("%d", &data);
        if (data == 0)
        {
            printf("data input OK");
            break;
        }
        
        // 2.将数据元素包装成一个结点 struct node
        crateListNode(&new, data);

        // 3.将结点添加进入链表中 -- first 来表示是第一个
        addNodeToManageSortList(MList, new);        
    }   
    n=kToManageSortList(MList,3);
	printf("倒数第3个结点是%d",n);
    // first 就指向了 单链表
    printList(MList);
	
	// 销毁该链表
    
    return 0;
}