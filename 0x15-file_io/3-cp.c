#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFERSIZE 1024
/**
 * error - print error message
 * @message: message pointer
 * @file_name: pointer to file name
 * @file_des: file descriptor
 */
void error(char *message, char *file_name, int file_des)
{
	dprintf(STDERR_FILENO, message, file_name);
	if (file_des != -1)
	{
		close(file_des);
	}
	exit(EXIT_FAILURE);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumwnt array
 * Return: success or failure
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int file_des_from, file_des_to;
	char buffer[BUFFERSIZE];
	ssize_t num_read, num_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	file_des_from = open(file_from, O_RDONLY);
	if (file_des_from == -1)
	{
		error("Error: Can't read from file %s\n", file_from, -1);
	}
	file_des_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_des_to == -1)
	{
		error("Error: Can't write to %s\n", file_to, file_des_from);
	}
	while ((num_read = read(file_des_from, buffer, BUFFERSIZE)) > 0)
	{
		num_written = write(file_des_to, buffer, num_read);
		if (num_written != num_read)
		{
			error("Error: Can't write to %s\n", file_to, file_des_from);
		}
	}
	if (num_read == -1)
	{
		error("Error: Can't read from file %s\n", file_from, file_des_from);
	}
	if (close(file_des_from) == -1)
	{
		error("Error: Can't close fd %d\n", file_from, file_des_to);
	}
	if (close(file_des_to) == -1)
	{
		error("Error: Can't close fd %d\n", file_to, -1);
	}
	exit(EXIT_SUCCESS);
}
