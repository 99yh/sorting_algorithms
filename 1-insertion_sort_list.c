#include "sort.h"
/**
 * insertion_sort_list - sort a doubly-linked list
 * @list: the doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev = NULL, *next = NULL;

	if (list)
		next = *list;
	while (next)
	{
		prev = next->prev;
		while (prev && next->n < prev->n)
		{
			if (next->next)
				next->next->prev = prev;
			if (prev->prev)
				prev->prev->next = next;
			prev->next = next->next;
			next->next = prev;
			next->prev = prev->prev;
			prev->prev = next;
			prev = next->prev;
			if (prev == NULL)
				*list = next;
			print_list(*list);
		}
		next = next->next;
	}
}
