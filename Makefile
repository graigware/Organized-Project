##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile projects
##

PROJECT    =   src

ERROR   =   error_handling

SRC     =   $(PROJECT)/$(ERROR)/add_errors.c \
            $(PROJECT)/$(ERROR)/create_wagons_errors.c \
            $(PROJECT)/main.c \
            $(PROJECT)/add.c \
            $(PROJECT)/sort.c \
            $(PROJECT)/del.c \
            $(PROJECT)/disp.c

OBJ     =   $(SRC:.c=.o)

EXEC    =   organized

INCLUDE =   ../include

LIB     =   my

LIBDIR  =   ./lib

CFLAGS  +=  -W -Wall -Wextra -g -I$(INCLUDE)

LDFLAGS += -L$(LIBDIR) -l$(LIB) -L. -lshell

all: $(EXEC)

$(EXEC): $(OBJ)
	$(MAKE) -C $(LIBDIR)
	gcc -o $(EXEC) $(OBJ) $(LDFLAGS) $(CFLAGS)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

clean:
	$(MAKE) -C $(LIBDIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	rm -f $(EXEC)

re: fclean all
