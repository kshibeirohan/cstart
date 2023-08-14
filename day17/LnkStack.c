#include <stdio.h>
#include <stdlib.h>
#include "LnkStack.h"

LnkStack *initStack()
{
	LnkStack *stack = malloc(sizeof(LnkStack));
	stack->top = NULL;
	stack->bottom = NULL;
	stack->num = 0;
	return stack;
}

StackElemType stackIsEmpty(LnkStack *stack )
{
	return stack->num;
}

LnkStack *Push(LnkStack *stack ,StackElemType data)
{
	StatckNode *sNode = malloc(sizeof(StatckNode));
	sNode->data = data;
	sNode->next = NULL;
	
	if(stackIsEmpty(stack))
	{
		sNode->next = stack->top;
		stack->top = sNode;
	}
	else
		stack->top = stack->bottom = sNode;
	stack->num++;
	return stack;
}

StackElemType Pop(LnkStack *stack )
{
	StatckNode *p = stack->top;
	StackElemType data;
	if(stackIsEmpty(stack))
	{
		stack->top = p->next;
		p->next = NULL;
		stack->num--;
		data = p->data;
		return data;
	}
	return -1;
}

StatckNode * getTop(LnkStack *stack)
{
	return stack->top;
}

void stackClear(LnkStack *stack)
{
	
	while( stackIsEmpty(stack) )
		Pop(stack);

}

void stackDestory(LnkStack *stack)
{

	stackClear(stack);

	free(stack);
}