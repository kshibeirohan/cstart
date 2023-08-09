#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;

/*
	循环链表类型为CiNode
	next指向下一个
	data为当前数据
*/
typedef struct circlenode
{
  
  	Elemtype data;		
   
    struct circlenode *next;	
}CircleNode;

/*
	初始化new
*/
void creatCircleListnode(CircleNode **new,Elemtype data) 
{
	*new = malloc(sizeof(*new));
	(*new)->data = data;
	(*new)->next = NULL;
}

/*
	头插法
*/
CircleNode *addCirlcleListnode(CircleNode *circlelist , CircleNode *new)
{
	static CircleNode *end = NULL;
	
	if(circlelist == NULL)
	{
		circlelist = new;
		end = new;
	}
	else if(new->data)
	{
		end->next = new;
		end = new;
	}
	else
		end->next = circlelist;
	
	return circlelist;
}

CircleNode *addNodeToCirlcleList(CircleNode *circlelist , CircleNode *new)
{
		CircleNode *p = circlelist;
		CircleNode *pre = p;
		if(circlelist == NULL)
		{
			circlelist = new;
			circlelist->next = circlelist;
			return circlelist;
		}
		
		do
		{
			if( p->data > new->data )
				break;
        
			// pre 先记录 p 的位置
			pre = p;
			// p再往后进行遍历
			p = p->next;
		}while(p != circlelist);
		
		if(pre->data > new->data && p == circlelist)
		{
			do{
				pre = pre->next;
			}while(pre->next != circlelist);
			new->next = p;
			pre->next = new;
			circlelist = new;
			
		}
		else if(pre->data < new ->data)
		{
			pre->next = new;
			new->next = p;
		}
		
		return circlelist;	
}

void printCirlcleList(CircleNode *circlelist)
{
	CircleNode *p = circlelist;

	do
	{
		printf("%d ",p->data);
		p=p->next;
	}while(p != circlelist);
	printf("\n");
}
CircleNode *destoryCirlcleList(CircleNode *circlelist)
{
	CircleNode *p = circlelist;
	
	while(circlelist)
	{
		//保存下一个销毁的地址
		p = circlelist->next;
		//销毁第一个结点
		circlelist->next = NULL;
		free(circlelist);
		//bilist指向下一个销毁的结点
		circlelist = p;
	}
	return circlelist;	
}
void main()
{
	Elemtype data;
   
	CircleNode *circlelist = NULL;
	//CircleNode *p = NULL;
	CircleNode *new = NULL;
    while(1)
    {
         
        scanf("%d", &data);
        if (data == 0)
        {
            printf("data input OK\n");
			//creatCircleListnode(&new, data);
			//circlelist = addCirlcleListnode(circlelist, new);  
            break;
        }
        
        creatCircleListnode(&new, data);
		circlelist = addNodeToCirlcleList(circlelist, new);
        //circlelist = addCirlcleListnode(circlelist, new);        
    } 
	
	printCirlcleList(circlelist);
	
	circlelist = destoryCirlcleList(circlelist);

}00