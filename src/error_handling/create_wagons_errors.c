/*
** EPITECH PROJECT, 2024
** add function
** File description:
** add materials
*/
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include "../include/lib.h"
#include "../libshell/shell.h"
#include "../include/list.h"

int create_wagons_errors(list_t **head, char *type, char *name)
{
    list_t *new_wagon = malloc(sizeof(list_t));

    if (head == NULL) {
        return 84;
    }
    if (type == NULL || name == NULL) {
        return 84;
    }
    if (new_wagon == NULL) {
        return 84;
    }
    return 0;
}
