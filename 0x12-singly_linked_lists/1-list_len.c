#include "lists.h"

/**
* list_len - return number of element in an array
* @h: list parameter
* Return: size of the link list
*/

size_t list_len(const list_t *h);
{
	size_t n = 0;

	while (h != NULL)
	{
		n = n + 1;
		h = h->next;
	}

	return (n);
}