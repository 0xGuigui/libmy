/*
** EPITECH PROJECT, 2020
** MyLib
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int x = 1;
    int y = 0;
    int z = 0;

    while (str[y] == 43 || str[y] == 45) {
        if (str[y] == 45)
            x = x * -1;
        y++;
    }
    while (str[y] != '\0') {
        if (str[y] >= 48 && str[y] <= 57) {
            z = z * 10;
            z = z + str[y] - 48;
            y++;
        }
        else
            return z * x;
    }
    return z * x;
}
