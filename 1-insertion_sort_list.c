#include "sort.h"

/**
 * insertion_sort_list - performs insertion sort on a d-linked list
 * @list: the liuust to be sorted
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL)
		return;

	node = *list;
	node = node->next;

	while (node)
	{
		while (node->prev && (node->n < (node->prev)->n))
		{
			tmp = node;

			if (node->next)
				(node->next)->prev = tmp->prev;
			(node->prev)->next = tmp->next;
			node = node->prev;
			tmp->prev = node->prev;
			tmp->next = node;
			if (node->prev)
				(node->prev)->next = tmp;
			node->prev = tmp;
			if (!(tmp->prev))
				*list = tmp;
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}
