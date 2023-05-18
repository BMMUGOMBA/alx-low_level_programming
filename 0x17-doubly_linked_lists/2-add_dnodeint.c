#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - A function that adds a node to the head of the list
 * @head: The double pointer to the head
 * @n: The data to add into new node
 * Return: A pointer to new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL, *temp = NULL;

new_node = (struct Node *)malloc(sizeof(struct Node));

new_node->n = new_data;

new_node->next = (**head);
new_node->prev = NULL;

if ((**head) != NULL)
(**head)->prev = new_node;

(**head) = new_node;
return (NULL);
}
