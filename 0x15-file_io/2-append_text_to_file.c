#include "main.h"

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename
 * @text_content: text content of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int forw, len, fw;

	if (filename == NULL)
		return (-1);
	forw = open(filename, O_APPEND | O_WRONLY);
	if (forw < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		fw = write(forw, text_content, len);
		if (fw < 0)
			return (-1);
	}
	close(forw);
	return (1);
}
