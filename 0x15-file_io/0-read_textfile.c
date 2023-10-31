#include "main.h"
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

/*
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to file.
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print or
 * 0 if the file can not be opened or read
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int discriptor;
ssize_t numbers_r, numbers_w;
if(filename == NULL)
return (0);
discriptor  = open(filename, O_RDONLY);
if(discriptor == -1)
return (0);
buffer = malloc (sizeof(char) * letters);
if(buffer == NULL)
close(discriptor);
return (0);
numbers_r = read(discriptor, buffer, letters);
close(discriptor);
if(numbers_r == -1)
free(buffer);
numbers_w = write(discriptor, buffer, numbers_r);
if(numbers_r != numbers_w)
return(0);
return (numbers_w);
}


