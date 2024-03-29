#include "lists.h"

/**
* print_list - print link list element
* @h: list parameter
* Return: size of the link list
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n = n + 1;
		h = h->next;
	}

	return (n);
}
