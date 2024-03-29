#include "main.h"
/**
 * read_textfile - Reads a textfile and prints
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print it
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fl, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fl);
	free(buffer);
	return (chk);
}
