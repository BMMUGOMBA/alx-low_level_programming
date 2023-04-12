#include "main.h"

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename
 * @text_content: text content of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w;
    int fStatus = -1;

	if (filename == NULL)
		return (fStatus);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == fStatus)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		w = write(fd, text_content, len);
		if (w == fStatus)
			return (fStatus);
	}
	close(fd);
	return (1);
}
