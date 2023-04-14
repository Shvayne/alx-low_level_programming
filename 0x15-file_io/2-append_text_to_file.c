#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text to an existing file
 * @filename: pointer to file
 * @text_content: text to appenf to end of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_pointer;

	if (filename == NULL)
		return (-1);
	file_pointer = fopen(filename, "a");
	if (file_pointer == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fprintf(file_pointer, "%s", text_content);
	}
	fclose(file_pointer);
	return (1);
}
