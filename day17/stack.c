#include <stdio.h>
#include <stdlib.h>
#include "LnkStack.h"

void main()
{
	LnkStack *stack = initStack();

	Push(stack,4);
	Push(stack,3);
	Push(stack,2);
	Push(stack,1);

	printf("top:%d\n",getTop(stack)->data);

	while( stack->num )
		printf("%d num:%d\n",Pop(stack),stack->num);

	stackDestory(stack);
}