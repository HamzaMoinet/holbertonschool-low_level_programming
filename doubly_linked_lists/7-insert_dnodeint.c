#include "lists.h"
/**
* insert_dnodeint_at_index -  inserts a new node at a given position
* @h: pointer to the pointer of the first node of the list
* @idx: Index where to put the new node
* @n: files to include in new node
* Return: adress of new node or NULL if it fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* Cas spécial pour l'insertion au début */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Parcours de la liste pour trouver la position */
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	/* Si l'index est invalide */
	if (current == NULL)
		return (NULL);

	/* Cas spécial pour l'insertion à la fin */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Création du nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Mise à jour des pointeurs */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
