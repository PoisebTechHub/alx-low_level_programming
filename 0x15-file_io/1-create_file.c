#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file_doc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_doc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_doc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_doc, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_doc);

	return (1);
}
