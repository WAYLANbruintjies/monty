#define  _POSIX_C_SOURCE 200809L

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: argument count
* @argv: argument vector (file location)
* Return: 0 (Success) Always
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int tally = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		tally++;
		if (read_line > 0)
		{
			execute(content, &stack, tally, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
