#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function to read a text file and print to stdout
 * @filename: pointer to file
 * @letters: how much byes to read
 * Return: 0 on failure or bytes written
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t file_des;
	size_t bytes_read;
	size_t bytes_written;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
		if (buffer == NULL)
		{
			close(file_des);
			return (0);
		}
	bytes_read = read(file_des, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	close(file_des);
	free(buffer);
	return (bytes_written);
}
