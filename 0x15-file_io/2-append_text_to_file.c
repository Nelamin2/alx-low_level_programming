#include "main.h"
#include<unistd.h>
#include<sys/types.h>
#include<sys.stats.h>
#include<fcntl.h>
#include<stdlib.h>

/**
 * append_text_to_file - function to append
 * @filename: a pointer to afile
 * @text_content: pointer to a file
 * Return: 1 on success and -1 on failure
 * filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int discriptor;
int rw;
int new;
if (!filename)
return (-1);
d = open(filename, O_RDONLY | O_APPEND);
if (d == -1)
return (0);
if (text_content)
{
for (new = 0; text_content[new], new++)
rw = write(d, text_content, new);
if (rw == -1)
return (-1);
close(d);
}
return (1);
}