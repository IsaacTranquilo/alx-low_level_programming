#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if there are non-digit characters or no numbers
 */
int main(int argc, char *argv[])
{
        int i, sum = 0;

        if (argc == 1)
        {
                printf("0\n");
                return (0);
        }

        for (i = 1; i < argc; i++)
        {
                int j;

                for (j = 0; argv[i][j] != '\0'; j++)
                {
                        if (!isdigit(argv[i][j]))
                        {
                                printf("Error\n");
                                return (1);
                        }
                }

                sum += atoi(argv[i]);
        }

        printf("%d\n", sum);
        return (0);
}
