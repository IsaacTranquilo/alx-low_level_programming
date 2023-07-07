#include "main.h"

#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints its name, including the path, followed by a new line.
 * If the program is renamed, it will still print the new name without needing to recompile.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    char *programName;

    /* Get the program name from the argument */
    programName = strrchr(argv[0], '/');
    if (programName == NULL)
        programName = argv[0];
    else
        programName++; /* Move past the '/' character */

    /* Print the program name */
    printf("%s\n", programName);

    return (0);
}
