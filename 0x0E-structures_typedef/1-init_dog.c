#include "main.h"
#include <stdio.h>

typedef struct {
    char* name;
    float age;
    char* owner;
} dog;

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

int main(void)
{
    dog my_dog;
    init_dog(&my_dog, "Max", 3.5, "John Doe");

    printf("Name: %s\n", my_dog.name);
    printf("Age: %.1f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return (0);
}

