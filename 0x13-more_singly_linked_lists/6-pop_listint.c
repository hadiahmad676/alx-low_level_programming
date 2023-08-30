#include "lists.h"
/**
 * pop_listint - deletes the first node of the list
 * it then retunrs its data
 * @head: the pointer to the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}

