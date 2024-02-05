#include "monty.h"

/**
 * f_queue - Sets the format of the data to a queue (FIFO)
 * @head: head of the stack
 * @counter: line number
 * Return: void
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Add node to the tail of the stack
 * @n: value
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *newnode, *current;

	current = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (current)
	{
		while (current->next)
			current = current->next;
	}
	if (!current)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		current->next = newnode;
		newnode->prev = current;
	}
}
