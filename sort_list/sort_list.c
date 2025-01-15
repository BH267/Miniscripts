#include "list.h"
#include <stddef.h>
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swp;
	t_list* ls;

	ls = lst;
	while (lst->next)
	{
		if (!cmp(lst->data, lst->next->data))
		{
			swp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swp;
			lst = ls;
		}
		else
			lst = lst->next; 
	}
	return (ls);
}

t_list	*newlist(int i)
{
	t_list *kst;

	kst->data = i;
	kst->next = NULL;
	return (kst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int	main()
{
	t_list	*lst;
	t_list	*l;
	int	i;

	l = lst;
	lst = newlist(108);
	lst->next = newlist(73);
	lst->next->next = newlist(45);

	i = 0;
	printf("\n");
	while (i++ < 3)
	{
		printf("%d, ", l->data);
		l = l->next;
	}
	lst = sort_list(lst,ascending);
	printf("\n");
	i = 0;
	while (i++ < 3)
	{
		printf("%d, ", lst->data);
		lst = lst->next;
	}

}
