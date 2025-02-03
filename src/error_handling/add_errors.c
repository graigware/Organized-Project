/*
** EPITECH PROJECT, 2024
** add function
** File description:
** add materials
*/
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include "../include/project.h"
#include "../include/lib.h"
#include "../libshell/shell.h"
#include "../include/list.h"

int check_data_args(void *data, char **args)
{
    if (data == NULL || args == NULL) {
        return 84;
    }
    return 0;
}

int check_all(char *type, char *name)
{
    if (type == NULL || name == NULL ||
        type[0] == '\0' || name[0] == '\0') {
            return 84;
    }
    if (material_categories(type) != 0) {
        return 84;
    }
    return 0;
}
