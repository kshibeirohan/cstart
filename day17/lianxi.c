#include <stdio.h>
#include <stdlib.h>
#include "LnkStack.h" 
 
int kuohao(char *arr)
{
	LnkStack *stack = initStack();
	while(*arr)
	{
		if(*arr == '{' || *arr == '(' || *arr == '[')
			Push(stack,*arr);
		else
		{
			switch(*arr)
			{
			case '}':
				if((char)Pop(stack) == '{')
					break;
				else
					return 0;
			case ')':
				if((char)Pop(stack) == '(')
					break;
				else
					return 0;
			case ']':
				if((char)Pop(stack) == '[')
					break;
				else
					return 0;
			}
		}
		arr++;
	}
	return 1;
}
 
void main()
{
	char a[]={"({})]"};
	int n;
	n = kuohao(a);
	if(n == 1)
		printf("匹配");
	else
		printf("不匹配");
}