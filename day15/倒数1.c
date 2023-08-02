Elemtype kToSortList(struct node *first,Elemtype x)
{
	struct node *p=first;
	struct node *pre=first;
	int n=1,s=0;
	while(pre != NULL)
	{
		s += 1;
		pre =pre->next;
	}
	if(x>s)
		return -1;
	while(n != s-x+1)
	{
		p=p->next;
		n += 1;
	}
	return p->data;
}