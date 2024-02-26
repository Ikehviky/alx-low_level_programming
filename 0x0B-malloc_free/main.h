<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
=======
char *_strdup(char *str);
void free_grid(int **grid, int height);
char **strtow(char *str);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
