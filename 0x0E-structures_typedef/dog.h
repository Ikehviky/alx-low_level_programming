<<<<<<< HEAD
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner:  owner
 * Description: This struct is for dog
 */

=======
#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - An alais for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
struct dog
{
	char *name;
	float age;
	char *owner;
};

<<<<<<< HEAD
typedef struct dog dog_t;
=======
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
<<<<<<< HEAD

#endif /*DOG_H*/
=======
#endif /*_DOG_H_*/
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
