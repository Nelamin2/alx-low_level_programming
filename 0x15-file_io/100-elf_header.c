#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * main - mark the start of the program
 * Return: 98 in case of errror
 */

/**
 * print_error - print error message
 * @message: error message to be printed
 */

 /**
  * display_elf_header_info - writes information from header to file
 */

void print_error(const char *message)
{ fprintf(stderr, "Error: %s\n", message);
exit(98);
}
void display_elf_header_info(const Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Could not open file");
}
Elf64_Ehdr header;
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
print_error("Could not read ELF header");
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Not an ELF file");
}
display_elf_header_info(&header);
close(fd);
return (0);
}

