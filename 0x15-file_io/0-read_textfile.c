#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *O/file_write - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t file_open, file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, buffer, letters);
	file_write = write(STDOUT_FILENO, buffer, file_read);

	if (file_open == -1 || file_read == -1 || file_write == -1)
	{
		free(buffer);
		return (0);
	}

	if (file_read != file_write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_open);

	return (file_write);

}
