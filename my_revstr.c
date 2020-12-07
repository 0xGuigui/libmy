/*
** EPITECH PROJECT, 2020
** MyLib
** File description:
** my_revstr.c
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

void swap(char *x, char *y)
{
    char z;

    z = *x;
    *x = *y;
    *y = z;
}

char *my_revstr(char *str)
{
    int x;
    int y;

    y = 0;
    x = my_strlen(str)-1;
    while (x/2 > 0) {
        swap(&str[y], &str[x]);
        x--;
        y++;
    }
    return str;
}
