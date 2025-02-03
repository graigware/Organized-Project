/*
** EPITECH PROJECT, 2024
** display
** File description:
** organiser des fichiers
*/
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include "include/lib.h"
#include "include/list.h"
#include "libshell/shell.h"
#include "include/printf.h"

int disp(void *data, char **args)
{
    list_t *head = *((list_t **)data);

    (void)args;
    if (data == NULL) {
        return 84;
    }
    if (head == NULL) {
        return 84;
    }
    if (args[0] != NULL) {
    return 84;
    }
    while (head != NULL) {
        my_printf("Type: %s, n°%i, Name: \"%s\"\n",
            head->type, head->id, head->name);
        head = head->next;
        }
    return 0;
}
