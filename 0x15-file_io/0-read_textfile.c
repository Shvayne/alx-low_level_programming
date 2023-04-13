#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function to read a text file and print to
 * stdout
 * @filename: pointer to file
 * @letters: how much byes to read
 * Return: 0 on failure or bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	/* checks if file pointer is null,return 0 if true */
	int file_des = open(filename, 0_RDONLY);

	if (file_des == -1)
		return (0);
	/**
	 * open the file in read only mode and return a file
	 * descriptor. checks if file descriptor is -1
	 * indicating error and return 0
	 */
	char *buffer = malloc(letters * sizeof(char));

		if (buffer == NULL)
		{
			close(file_des);
			return (0);
		}
	/**
	 * allocate a buffer of letter characters. checks
	 * if the allocation was sucessful, returns 0 if not
	 * then close the file descriptior
	 */
	ssize_t bytes_read = read(file_des, buffer, letters);

	if (bytes_read == -1)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	/* read up to letters bytes from the file descriptor */
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	/**
	 * write bytes read from buffer to stdout uwing write system call
	 * and return number of bytes written
	 */
	close(file_des);
	free(buffer);
	return (byte_written);


}
