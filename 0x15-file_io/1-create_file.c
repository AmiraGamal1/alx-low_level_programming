#include "main.h"

/**
  * create_file - create a file
  * @filename: file name
  * @text_content: string
  * Return: 1 on success -1 fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, fsize = 0;

	if (!filename)
		return (-1);
	while (text_content && text_content[fsize])
		fsize++;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, fsize);
	if (fd < 0 || w < 0)
		return (-1);

	close(fd);
	return (1);
}
