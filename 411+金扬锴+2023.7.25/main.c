#include <stdio.h>
#include <stdlib.h>
#include "LnkStack.h"
/*
1.遍历后缀表达式，碰到数字 入栈
2.读到运算符，出栈两个操作数，得到的结果入栈 
*/
StackElemType count(StackElemType *num1,StackElemType *num2, char *s)
{
	switch(*s)
	{
		case '+':
			*num1 += *num2;
			break;
		case '-':
			*num1 -= *num2;
			break;
		case '*':
			*num1 *= *num2;
			break;
		case '/':
			*num1 /= *num2;
		default:
			printf("error\n");
	}
	return *num1;
}

void Suffixoperation(char *arr)
{
	LnkStack *stack = initStack();
	StackElemType sum = 0,num1,num2, n;
	while(*arr)
	{
		if(*arr != ' ')
		{
			sum = 0;
			if(*arr >= '0' && *arr <= '9')
			{
				while(*arr != ' ' && *arr)
				{
					sum = sum*10 + (*arr-'0');
					arr++;
				}
				Push(stack,sum);
			}
			else
			{
				num2 = Pop(stack);
				num1 = Pop(stack);
				n = count(&num1,&num2,arr);
				Push(stack,n);
			}
			
		}
		arr++;
	}
	printf("1 2 3 *+ 4 5 * 6 + 7 *+ = %d",n);
}

int main()
{
	char a[] = {"1 2 3 *+ 4 5 * 6 + 7 *+"};

	Suffixoperation(a);
	
	return 0;
}