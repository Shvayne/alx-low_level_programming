#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
typedef long int ssize_t;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error(char *message, char *file_name, int file_des);

#endif
