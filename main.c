#include "monty.h"

/**
 * main - Main entry point for the Monty code interpreter.
 *
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Return: The exit status of the program.
 */

int main(int argc, char **argv)
{

stack_t *stack = NULL;
  if (argc != 2)
    {
      fprintf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }


  FILE *file = open_file(argv[1]);

  treat_instructions(file, &stack);

  fclose(file);
  free_stack(&stack);

  return (EXIT_SUCCESS);
}
