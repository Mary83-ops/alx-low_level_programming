#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * struct dog dog_t - a new type of data
 * representing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
=======
*struct dog - a new type of data
*representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/
>>>>>>> dca4c0b7dc84faab97d9de0f0facdf4fd1562c78
struct dog
{
char *name;
float age;
char *owner;
};


/**
<<<<<<< HEAD
 * dog_t - Typedef for struct dog
 */
=======
*dog_t - Typedef for struct dog
*/
>>>>>>> dca4c0b7dc84faab97d9de0f0facdf4fd1562c78
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> dca4c0b7dc84faab97d9de0f0facdf4fd1562c78
