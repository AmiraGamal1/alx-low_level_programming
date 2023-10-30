#include "main.h"
/**
  * close_file - close
  * @fd: file discriptor
  * Return: nothings
  */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
  * main - Entry point
  * @argc: num of args
  * @argv: argument
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int fd, fd_p, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd = open(argv[1], O_RDONLY);
	r = read(fd, buffer, 1024);
	fd_p = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	do {
		if (fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd_p, buffer, r);
		if (fd_p == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd, buffer, 1024);
		fd_p = open(argv[2], O_WRONLY, O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(fd);
	close_file(fd_p);
	return (0);
}
