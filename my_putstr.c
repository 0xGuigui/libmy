/*
** EPITECH PROJECT, 2020
** MyLib
** File description:
** my_putstr.c
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0'){
        write(1, str, x);
        x++;
    }
}