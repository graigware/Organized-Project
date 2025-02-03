/*
** EPITECH PROJECT, 2024
** struct
** File description:
** struct linked_list
*/
#include <stdarg.h>
#ifndef LIST_H
    #define LIST_H

typedef struct list_t {
    char *type;
    char *name;
    int id;
    struct list_t *next;
} list_t;

#endif
