
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
int rw;
int new;
if (!filename)
return (-1);
d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (d == -1)
return (0);
if (!text_content)
return (-1);
text_content = "";
for (new = 0; text_content[new], new++)
rw = write(d, text_content, new);
if (rw == -1)
return (-1);
close(discriptor);
}
return (1);
