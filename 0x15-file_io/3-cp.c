#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 97, 98, 99, or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_bytes, wr_bytes;
	char buffer[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99); }
	while ((rd_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes == -1 || wr_bytes != rd_bytes)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99); }
	}
	if (rd_bytes == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98); }
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
