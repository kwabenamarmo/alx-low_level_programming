#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(1);
	}

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(98);
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r != sizeof(Elf64_Ehdr))
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Failed to read ELF header\n");
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);

	free(header);
	close_elf(o);

	return (0);
}
