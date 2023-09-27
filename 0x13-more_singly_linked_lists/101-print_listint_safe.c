#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - calculates the length of a loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the loop, or 0 if there is no loop
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t length = 1;

	/* If the list is empty or has only one node, there is no loop */
	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;  /* tortoise pointer */
	fast_ptr = head->next->next;  /* hare pointer */

	/* Floyd's cycle-finding algorithm */
	while (fast_ptr != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
			}

			return (length);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length, i;

	length = looped_listint_len(head);

	if (!length)
	{
		for (; head != NULL; length++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < length; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (length);
}
