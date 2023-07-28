#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct t1
{
	int n;
	char p[0];
};
void main()
{
	struct t1 *t =malloc(sizeof(*t)+strlen("liurui")+1);
	t->n =strlen("liurui")+1;
	strcpy(t->p,"liurui");
	printf("%p %p",&t->n,&t->p);
	free(t);
}