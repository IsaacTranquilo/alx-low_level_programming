#include "main.h"
 
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
        int i;

        for (i = 0; i < argc; i++)
        {
                printf("%s\n", argv[i]);
        }

        return (0);
}
