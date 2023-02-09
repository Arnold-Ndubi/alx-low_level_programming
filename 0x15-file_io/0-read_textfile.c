#include "main.h"

/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: pointer to text file
 * @letters: no. of characters to be read and printed
 *
 * Return: No. of characters actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *str;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, str, letters);
	wr = write(STDOUT_FILENO, str, rd);

	if (op == -1 || rd == -1 || wr == -1)
	{
		free(str);
		return (0);
	}
	free(str);
	close(op);
	return (wr);
}
