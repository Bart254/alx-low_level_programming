#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hash_tables.h"

char *prompt(void);
void prompt_err(const char *);
/**
 * main - tests my code
 * 
 * This is a series of test to gauge my understanding on hash tables
 * and their implementation in C language
 *
 * Return: 0 if successful
 */
int main(void)
{
	hash_table_t *ht;
	char *names[] = {"Castro", "Keith", "Tito", "Siele", "Cyrus",
		"Nyabuto", "Tiffany", "Mbole", "Obadiah", "Bartlett", "Moraa", NULL};
	char *reg[] = {"2580", "2672", "2652", "2670", "2584", "2583", "2650", "2588", "2586",
		"2580", "133456", NULL}, *key, *value;
	int e;

	ht = hash_table_create(1024);
	if (ht == NULL)
		exit(EXIT_FAILURE);
	for (e = 0; names[e]; e++)
	{
		if (!hash_table_set(ht, names[e], reg[e]))
			exit(EXIT_FAILURE);
	}
	printf("Below is a list of data we have, kindly confirm that the details are correct\n");
	hash_table_print(ht);
	for (e = 0; e < 50; e++)
		putchar('-');
	putchar('\n');
	key = prompt();
	if (key == NULL)
		value = NULL;
	else
		value = hash_table_get(ht, key);
	if (value == NULL)
		prompt_err(key);
	else
		printf("Registration Number: %s\n", value);
	return (0);
}

/**
 * prompt - prints instructions on the screen
 * Return: name of student
 */
char *prompt(void)
{
	char buffer[1024], *student;
	int size, e;

	printf("Hello user. This is a classified database that allows you to view the registration numbers of students\n");
	fflush(stdout);
	printf("Input name then press Enter: ");
	fflush(stdout);
	size = read(STDIN_FILENO, buffer, 1024);
	student = malloc(size * sizeof(char));
	if (student == NULL)
		return (NULL);
	for (e = 0; e < size && buffer[e] != '\n'; e++)
		student[e] = buffer[e];
	return (student);
}

/**
 * prompt_err - returns an error message if the key is not found
 * @key: key/name passed
 */
void prompt_err(const char *key)
{
	printf("Error: The name \"%s\" is invalid/ does not exist in the database, try again\n", key);
}
	

