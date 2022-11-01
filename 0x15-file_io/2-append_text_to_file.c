#include "main.h"

/**
 * append_text_to_file - function that appends text to file
 * @filename: filename
 * @text_content: file content
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, wrBytes, textc = 0;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_RDWR | O_APPEND);

	if (ptr < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[textc] != '\0')
		textc++;

	wrBytes = write(ptr, text_content, textc);

	if (wrBytes < 0)
		return (-1);

	close(ptr);
	return (1);
}
