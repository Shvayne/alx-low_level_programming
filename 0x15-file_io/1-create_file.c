#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file and write text to it
 * @filename: name of file
 * @text_content: pointer to text content
 * Return: 1 or -1  if error
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file_des, len, write_result;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_result = write(file_des, text_content, len);
		if (write_result == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
