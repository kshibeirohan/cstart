struct node * incorporateintoSortList(struct node *list,struct node *nlist)
{
	struct node *p=NULL;
	struct node *plist = p;
	if(list == NULL)
		return nlist;
	if(nlist == NULL)
		return list;
	 if (list->data < nlist->data)
    {
       p = list1;
       list1 = list1->next;
    }
    else
    {
        p = nlist;
        nlist = nlist->next;
    }
	while (list&&nlist)
    {
        if (list->data < nlist->data)
        {
            p->next = list;
            list = list->next;
            p = p->next;
        }
        else
        {
            p->next = nlist;
            nlist = nlist->next;
            p = p->next;
        }
    }
    return plist;

	
}