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
dlistint_t *ptr;
new_node = (struct node *)malloc(sizeof(struct node));
new_node->n = n;
ptr = head;
while (ptr->next != head)
ptr = ptr->next;
ptr->next = new_node;
new_node->next = head;
return (head);
}

