/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organiser des fichiers
*/
#include <fcntl.h>
#include <stddef.h>
#include "include/lib.h"
#include "include/list.h"
#include "include/printf.h"
#include "libshell/shell.h"

int credits(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        if (av[i][0] == '-' && av[i][1] == 'h') {
            my_printf("COMMANDS : add & disp\n\n");
            my_printf("'add' allows you to add necessary materials.\n");
            my_printf("The only categories of material you can add are : ");
            my_printf("WIRE ; DEVICE ; SENSOR ; PROCESSOR ; ACTUATOR.\n\n");
            my_printf("'disp' allows you to display all your ");
            my_printf("materials and their categories.\n");
            my_printf("But you can't display whatever you want");
            my_printf(" or the program will stop.\n\n");
            my_printf("How to use those commands then :\n");
            my_printf("For 'add', just write 'add' one time followed by ");
            my_printf("the category(ies) and the material(s)\n");
            my_printf("and for disp, just write 'disp'");
            my_printf("after adding something\n");
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    list_t *head = NULL;

    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        credits(ac, av);
        return 0;
    }
    return workshop_shell(&head);
}
