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
 * f_stack - prints the tops.
 * @head: stack heads.
 * @counter: line_numbers.
 * Return: no returns.
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
