#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_random_password - Generates a random valid password.
 *
 * Return: The generated password.
 */
char *generate_random_password()
{
    static const char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

    if (password == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int random_index = rand() % (sizeof(valid_characters) - 1);
        password[i] = valid_characters[random_index];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void)
{
    char *password;
    srand(time(NULL));

    password = generate_random_password();
    printf("Generated password: %s\n", password);

    free(password);
    return 0;
}
