#include "lists.h"
/**
* sum_dlistint - function that returns the sum of all the data
* @head: pointer to the first node of the list
* Return: the amount of all the elements or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
