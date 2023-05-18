#include "lists.h"
/**
  * *add_dnodeint_end - Add a node to the end of a doubly linked list
  * @head: Pointer to the pointer to the first node of the list
  * @n: The value to store in the new node
  * Return: Address of the new node on success, NULL if it fails
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new_node;
	dlistint_t *last;

	last = *head;
	new_node = malloc(sizeof(dlistint_t));


	new_node->n = new_data;

	new_node->next = NULL;

	if (*head == NULL)
{
		new_node->prev = NULL;
		*head = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;


	new_node->prev = last;

	return (new_node);
}

