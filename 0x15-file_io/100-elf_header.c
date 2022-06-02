#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

void check_elf(unsigned char *dent);
void print_magic(unsigned char *dent);
void print_class(unsigned char *dent);
void print_data(unsigned char *dent);
void print_version(unsigned char *dent);
void print_abi(unsigned char *dent);
void print_osabi(unsigned char *dent);
void close_elf(int elf);

/**
 * check_elf - checks whether a file is an elf file
 * @dent: ptr to an array having the elf nos
 */
void check_elf(unsigned char *dent)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (dent[i] != 127 && dent[i] != 'E' && dent[i] != 'L' && dent[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - prints the magic numbers of an elf headed
 * @dent: ptr to an array of elf noa
 */
void print_magic(unsigned char *dent)
{
	int i;

	printf(" Magic:  ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", dent[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - prints clas of elf header
 * @dent: ptr
 */
void print_class(unsigned char *dent)
{
	printf("  Class:            ");

	switch (dent[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", dent[EI_CLASS]);
	}
}
/**
 * print_data - prints data of an elf header
 * @dent: ptr to elf
 */
void print_data(unsigned char *dent)
{
	printf(" Data:                 ");

	switch (dent[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x\n", dent[EI_CLASS]);
	}
}
/**
 * print_version - prints version of elf header
 * @dent: ptr to array
 */
void print_version(unsigned char *dent)
{
	printf(" version:                    %d", dent[EI_VERSION]);

	switch (dent[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - prints os/abi of elf
 * @dent: ptr to elf
 */
void print_osabi(unsigned char *dent)
{
	printf(" OS/ABI:                          ");

	switch (dent[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("Unix - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("Unix - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("Unix - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Unix - Linux\n");
			break;
		default:
			printf("<unknown: %x\n", dent[EI_OSABI]);
	}
}
/**
 * close_elf - closes an elf file
 * @elf: file descriptor
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Eroor: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - displays the info contained
 * @argc: number of args
 * @argv: array of ptrs
 * Return: 0
 */
int main(int __attribute__ ((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

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
		dprintf(STDERR_FILENO, "Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: %s : No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
