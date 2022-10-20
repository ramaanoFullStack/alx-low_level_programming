#ifndef LISTS_H
#define LISTS_H
#include<stddef.h>
#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
* Desc: header file containinf prototypes and definitions
*for all functions and types written in this proj
*/

#include <stdlib.h>

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
