/*
** EPITECH PROJECT, 2024
** include
** File description:
** include
*/

#include <stdarg.h>
#include <unistd.h>
#include <sys/stat.h>
#include "list.h"
#ifndef PROJECT_H
    #define PROJECT_H

int check_all(char *type, char *name);

int check_material(char *type, char *name);

int create_wagons_errors(list_t **head, char *type, char *name);

int check_data_args(void *data, char **args);

int material_categories(char *str);

#endif
