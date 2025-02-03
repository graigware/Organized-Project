/*
** EPITECH PROJECT, 2024
** add function
** File description:
** add materials
*/
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include "include/lib.h"
#include "libshell/shell.h"
#include "include/list.h"
#include "include/printf.h"
#include "include/project.h"

int material_categories(char *str)
{
    if (str == NULL) {
        my_printf("There is no type\n");
        return 84;
    }
    if (my_strcmp(str, "WIRE") == 0)
        return 0;
    if (my_strcmp(str, "ACTUATOR") == 0)
        return 0;
    if (my_strcmp(str, "DEVICE") == 0)
        return 0;
    if (my_strcmp(str, "SENSOR") == 0)
        return 0;
    if (my_strcmp(str, "PROCESSOR") == 0)
        return 0;
    return 84;
}

int wagons(list_t **head, char *type, char *name)
{
    list_t *new_wagon = malloc(sizeof(list_t));
    static int id = 0;

    create_wagons_errors(head, type, name);
    new_wagon->type = my_strdup(type);
    new_wagon->name = my_strdup(name);
    if (new_wagon->type == NULL || new_wagon->name == NULL) {
        free(new_wagon);
        return 84;
    }
    new_wagon->id = id;
    id++;
    new_wagon->next = *head;
    *head = new_wagon;
    my_printf("%s n°%i - \"%s\" added.\n",
        new_wagon->type, new_wagon->id, new_wagon->name);
    return 0;
}

int add(void *data, char **args)
{
    list_t **head = (list_t **)data;
    int arg_count = 0;
    int i = 0;
    char *type;
    char *name;

    if (check_data_args(data, args) != 0)
        return 84;
    while (args[arg_count] != NULL)
        arg_count++;
    if (args[0] == NULL)
        return 84;
    for (; args[i] != NULL; i += 2) {
        type = args[i];
        name = args[i + 1];
        if (check_all(type, name) != 0 || wagons(head, type, name) != 0) {
            return 84;
        }
    }
    return 0;
}
