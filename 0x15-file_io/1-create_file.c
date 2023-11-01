#include "main.h"
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
/**
 * create_file - create a file and write on it
 * @filename: a pointer to afile
 * @text_content: pointer to astring
 * Return: 1 on success and -1 on failure
 * filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
int discriptor;
if (!filename)
return (-1);
discriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (discriptor == -1)
return (0);
if (text_content != NULL)
{
ssize_t rw = write(discriptor, text_content, strlen(text_content));
close(discriptor);
if (rw == -1)
{
return (-1);
}
}
else
{
close(discriptor);
}
return (1);
}
