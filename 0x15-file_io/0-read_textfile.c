#include "main.h"

/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_doc;
	ssize_t pent, next;
	char *buff;

	if (!filename)
		return (0);

	file_doc = open(filename, O_RDONLY);

	if (file_doc == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	pent = read(file_doc, buff, letters);
	next = write(STDOUT_FILENO, buff, pent);

	close(file_doc);

	free(buff);

	return (next);
}
