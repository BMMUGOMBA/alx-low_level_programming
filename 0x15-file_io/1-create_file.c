#include "main.h"

/**
 *  create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fORW, len, fW;
	int fStat;

	fStat = -1;

	if (filename == NULL)
		return (fStat);

	fORW = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fORW == fStat)
	{
		return (fStat);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		fW = write(fORW, text_content, len);
	}
	if (fW == fStat)
	{
		return (fStat);
	}
	close(fORW);
	return (fStat);
}
