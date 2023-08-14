#include <stdio.h>
#include <stdlib.h>
#include "LnkStack.h"
#include "SeqQueue.h"
/*
1.遍历后缀表达式，碰到数字 入栈
2.读到运算符，出栈两个操作数，得到的结果入栈 
*/

// 比较运算符的优先级 如果operator1的优先级高于operator2 返回假，否则返回真
int operatorPriority(char operator1, char operator2)
{
    // 定义两个优先级 +- 的优先级是1 */的优先级是2
    int Priority1, Priority2;
    switch(operator1)
    {
        case '+':
        case '-':
            Priority1 = 1;
            break;
        case '*':
        case '/':
            Priority1 = 2;
            break;
        default : printf("error\n");    
    }
    
    switch(operator2)
    {
        case '+':
        case '-':
            Priority2 = 1;
            break;
        case '*':
        case '/':
            Priority2 = 2;
            break;
        default : printf("error\n");    
    }
    
    // 如果是0 说明两个优先级一样 -1 说明Priority1 优先级低 1说明Priority1 优先级高
    return (Priority1-Priority2<=0);
}

char *InfixToSuffix(char *InfixExpression ,char *a) // 中缀转后缀
{
	LnkStack *stack = initStack();
	int i=0;
    char *s = InfixExpression;    
    while(*s)
    {
        // 1. 如果是操作数 -- 直接输出
      	if ( *s >= '0' &&  *s <= '9' || *s == ' ')
		{
        	*(a+i) = *s;
			i++;
		}
        // 2. 如果是运算符 先出栈比他优先级高的，再入栈
       	else if ( *s == '+' || *s == '-' || *s == '*' || *s == '/') 
        {
       		while ( stack->top && getTop(stack)->data != '(' && operatorPriority(*s, getTop(stack)->data) )
			{
               *(a+i) = Pop(stack) ;
			   i++;
            }
            Push(stack, *s);
        }            
        // 3. 如果是左括号 直接入栈
        else if ( *s == '(' )
           Push(stack, *s);         
        // 4. 如果是右括号 出栈 直到遇到左括号
        else if ( *s == ')' )
        {
            // 当栈不为空  并且栈顶元素不是右括号，直接出栈
            while( stack->top && getTop(stack)->data != '(' )
			{
               *(a+i) = Pop(stack) ;
			   i++;
			}
            // 弹出左括号但不输出
            Pop(stack);
        }
		s++;
    }
    *(a+i) = ' ';
	i++;
    // 当 InfixExpression 遍历完了 应该将栈中所有元素出栈
    while(stack->top)
	{
		*(a+i) = Pop(stack) ;
		i++;
	}
    // 将栈销毁
    stackDestory(stack);
	return a;
}

QElemType count(QElemType *num1,QElemType *num2, char *s)
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
			break;
		default:
			printf("error\n");
			return -1;
	}
	return *num1;
}

int Suffixoperation(SeqQueue *Queue)
{
	LnkStack *stack = initStack();
	QElemType sum,num1,num2, n;
	while(queueIsEmpty(Queue))
	{
		if((char)getFront(Queue) != ' ')
		{
			sum = 0;
			
			if((char)getFront(Queue) >= '0' && (char)getFront(Queue) <= '9')
			{
				while((char)getFront(Queue) != ' ' && (char)getFront(Queue) >= '0' && (char)getFront(Queue) <= '9')
					sum = sum*10 + ((char)delQueue-'0');

				Push(stack,sum);
			}
			else
			{
				num2 = Pop(stack);
				num1 = Pop(stack);
				n = count(&num1,&num2,arr);
				Push(stack,n);
				printf("n:%d\n",n);
			}
		}
		
		delQueue;
	}
	return n;
}

int main()
{

	char expression[100] = {0};
	int n,i;
	SeqQueue *Queue = initQueue();
	gets(expression);
	
	char a[100] = {'\0'};
	
	InfixToSuffix(expression,a);
	while(a[i] == {'\0'})
	{
		enQueue(Queue,a[i]);
		i++;
	}
	
	n = Suffixoperation(Queue);
	
	printf("%s = %d",a,n);
	
	return 0;
}