#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Prints the information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("Class:%s\n", header->e_ident[EI_CLASS]
== ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:%s\n", header->e_ident[EI_DATA] ==
ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:%d\n", header->e_ident[EI_OSABI]);
printf("ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:%d\n", header->e_type);
printf("Entry point address:%#lx\n", (unsigned long) header->e_entry);
}
/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
exit(98);
}
Elf64_Ehdr header;
ssize_t read_bytes = read(fd, &header, sizeof(Elf64_Ehdr));
if (read_bytes == -1 || read_bytes != sizeof(Elf64_Ehdr))
fprintf(stderr, "Error: Could not read ELF header from file %s\n", argv[1]);
close(fd);
exit(98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: %s is not an ELF file\n", argv[1])
close(fd);
exit(98);
}
print_elf_header(&header);
close(fd);
return (0);
}
