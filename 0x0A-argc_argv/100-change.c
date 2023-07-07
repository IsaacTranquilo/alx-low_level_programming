#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 for incorrect number of arguments or negative input
 */
int main(int argc, char *argv[])
{
        int cents, coins = 0;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        cents = atoi(argv[1]);

        if (cents < 0)
        {
                printf("0\n");
                return (0);
        }

        while (cents > 0)
        {
                if (cents >= 25)
                {
                        cents -= 25;
                        coins++;
                }
                else if (cents >= 10)
                {
                        cents -= 10;
                        coins++;
                }
                else if (cents >= 5)
                {
                        cents -= 5;
                        coins++;
                }
                else if (cents >= 2)
                {
                        cents -= 2;
                        coins++;
                }
                else
                {
                        cents -= 1;
                        coins++;
                }
        }

        printf("%d\n", coins);
        return (0);
}
