/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return x;
}