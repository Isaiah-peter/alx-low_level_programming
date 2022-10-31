#include "lists.h"
#include <string.h>

/**
 * *add_node - add to a linked list
 * @head: list_t param
 * @str: the name of the head->str
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));

	new_list->str = strdup(str);
	new_list->len = strlen(str);
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
