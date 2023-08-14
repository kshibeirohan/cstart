#ifndef __LNKSTACK_H__
#define __LNKSTACK_H__
typedef int StackElemType;

typedef struct stacknode
{
    StackElemType data;
    struct stacknode *next;
}StatckNode;

typedef struct stack
{
    struct stacknode *top;		//指向栈顶
    struct stacknode *bottom;	//指向栈底
    int num;					//保存栈中元素个数
}LnkStack;

LnkStack *initStack();

StackElemType stackIsEmpty(LnkStack *stack );

LnkStack *Push(LnkStack *stack ,StackElemType data);

StackElemType Pop(LnkStack *stack );

StatckNode * getTop(LnkStack *stack);

void stackClear(LnkStack *stack);

void stackDestory(LnkStack *stack);

#endif

