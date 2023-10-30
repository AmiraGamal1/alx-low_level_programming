#include "main.h"

/**
  * append_text_to_file - append to file
  * @filename: file name
  * @text_content: text to write
  * Return: 1 on success -1 on fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, fsize = 0;

	if (!filename)
		return (-1);
	while (text_content && text_content[fsize])
		fsize++;
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, fsize);
	if (fd < 0 || w < 0)
		return (-1);

	close(fd);
	return (1);
}
