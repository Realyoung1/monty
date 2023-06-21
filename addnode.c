#include "monty.h"

#include <stdbool.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

/**
 * addnode - func to add node to the head stacks.
 * @head: this is the head of the stacks.
 * @n: new_values.
 * Return: no returns.
*/

void addnode(stack_t **head, int m)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\m");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->m = m;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
