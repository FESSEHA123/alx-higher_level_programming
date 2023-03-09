#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *insert_node - inserts number in sorte list
 *@head: addres of head
 *@number: number to insert
 *insert_node - Inserts a number into a sorted singly-linked list
 *@head: A pointer the head of the linked list
 *@number: The number to insert
 *
 *Return: on success addres of new node, NULL if failed
 *Return: NULL in case of failure
 *	a pointer to the new mode
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));

	if(!head)
		return (NULL);
	listint_t *node = *head, *new;

	if(!new)
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (*head == NULL || number < (*head)->n)
	if (node == NULL || node->n >= number)
	{
		temp = *head;
		new->next = node;
		*head = new;
		new->next = temp;
		return (new);
	}
	while (current)
	{
		if (current->next == NULL)
		{
			current->next == new;
			return (new);
		}
		if (number < current->next->)
		{
			temp = current->next;
			current->next = new;
			new->next = temp;
			return (new);
		}
		current = current->next;
	}
	free(new);
	return (NULL);

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
