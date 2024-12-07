#include "lists.h"

/**
 * free_list - free lits_t
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;	/*Save the current node*/
		head = head->next; /*Move to the next node*/
		free(temp->str);	/*Free the string in the current node*/
		free(temp);	/*Free the current node*/
	}
}
