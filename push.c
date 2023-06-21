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
 * f_push - add node to the stacks.
 * @head: stack heads.
 * @counter: line_numbers.
 * Return: no returns.
*/

void f_push(stack_t **head, unsigned int counter)
{
	int n, p = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			p++;
		for (; bus.arg[p] != '\0'; p++)
		{
			if (bus.arg[p] > 57 || bus.arg[p] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
