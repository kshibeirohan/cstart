#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int data;
	struct node *first = NULL;
	struct node *end = NULL;
	struct node *new = NULL;
	new = malloc(sizeof(struct node));
	while(1)
	{
		scanf("%d",&data);
		new->data = data;
		new->next = NULL;
		
		if(data == 0)
		{
			printf("ok");
			break;
		}

		if(first == NULL)
		{
			first = new;
			end = new;
		}
		else
		{
			end->next = new;
			end = new;
		}
	}
	//struct node *p = first;

		printf("%d",first->data);
		//p=p->next;


}