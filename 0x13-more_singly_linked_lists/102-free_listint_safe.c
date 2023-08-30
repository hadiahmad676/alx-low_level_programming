#include "lists.h"
/**
 * free_listp2 - frees a linked list
 * @head: head of the list
 * Return: no return
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - prints the linked list
 * @h: pointer to the list
 * Return: number of nodes in thelist
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *cur;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (n_nodes);
			}
		}
		cur = *h;
		*h = (*h)->next;
		free(cur);
		n_nodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (n_nodes);
}
