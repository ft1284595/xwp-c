#include <stdio.h>
#include "link.h"

void print_item(link p)
{
	printf("%d\n", p->item);
}


int main(void)
{
	link head, p;		//struct node *head
	link_init(&head);	//head => NULL

	//printf("1------------\n");
	p = make_node(3);
	link_insert(&head, p);	//头插法
	p = make_node(5);
	link_insert(&head, p);	//头插法
	p = make_node(1);
	link_insert(&head, p);	//头插法
	p = make_node(8);
	link_insert(&head, p);	//头插法
	//printf("2----------\n");
	link_travel(&head, print_item);
	//printf("3=======\n");
	printf("***************\n");
	p = link_search(&head, 1);
	if(p != NULL)
		link_delete(&head, p);
	link_travel(&head, print_item);
	link_destory(&head);
	return 0;
}
