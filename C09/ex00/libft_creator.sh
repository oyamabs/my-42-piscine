#!/bin/sh

cc -Wall -Werror -Wextra -c *.c
ar -rsc libft.a *.o
