#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * Nelson
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mpya;

	mpya = malloc(sizeof(listint_t));
	if (!mpya)
		return (NULL);

	mpya->n = n;
	mpya->next = *head;
	*head = mpya;

	return (mpya);
}
