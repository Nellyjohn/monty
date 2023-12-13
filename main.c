#include "monty.h"

/**
 * main - entry into interpreter
 * @argc: argc counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd, _ispush = 0;
	unsigned int line = 1;
	ssize_t n_read;
	char *buf, *token;
	stack_t *h = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buf = malloc(sizeof(char) * 10000);
	if (!buf)
		return (0);
	n_read = read(fd, buf, 10000);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		exit(EXIT_FAILURE);
	}
	token = strtok(buf, "\n\t\a\r ;:");
	if (token[0] == '#')
		return (0);
	while (token != NULL)
	{
		if (_ispush == 1)
		{
			_is_push(&h, line, token);
			_ispush = 0;
			token = strtok(NULL, "\n\t\a\r ;:");
			line++;
			continue;
		}
		else if (strcmp(token, "push") == 0)
		{
			_ispush = 1;
			token = strtok(NULL, "\n\t\a\r ;:");
			continue;
		}
		else
		{
			if (is_get_op_func(token) != 0)
			{
				is_get_op_func(token)(&h, line);
			}
			else
			{
				_is_free_dlist(&h);
				printf("L%d: unknown instruction %s\n", line, token);
				exit(EXIT_FAILURE);
			}
		}
		line++;
		token = strtok(NULL, "\n\t\a\r ;:");
	}
	_is_free_dlist(&h);
	free(buf);
	close(fd);
	return (0);
}
