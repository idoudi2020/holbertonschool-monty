#include "monty.h"

/**
 * _push - Pushes an integer onto the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number for error reporting.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, "\n\t\r ");

	if (!arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	int n = parse_arg(arg, line_number);
	add_node(stack, n);
}
