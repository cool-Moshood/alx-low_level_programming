#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: file name to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	ssize_t	rdbyte, wrbyte;

	char *ch;

	if (filename == NULL)
		return (0);

	ptr = open(filename, O_RDONLY);

	if (ptr == -1)
	{
		return (0);
	}
	ch = malloc(sizeof(char) * letters);

	if (ch == NULL)
	{
		close(ptr);
		return (0);
	}
	rdbyte = read(ptr, ch, letters);

	close(ptr);
	if (rdbyte == -1)
	{
		free(ch);
		return (0);
	}
	wrbyte = write(STDOUT_FILENO, ch, rdbyte);
	free(ch);

	if (rdbyte != wrbyte)
		return (0);
	return (wrbyte);
}
