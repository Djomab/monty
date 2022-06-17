#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	
	open_file(argv[1]);
	free_nodes();

	return (0);
}

/**
 * free_nodes - frees nodes
 * Return: void
 */
void free_nodes()
{
	stack_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
