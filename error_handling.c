/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** error_handling
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int check_map_char(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'X' && buffer[i] != 'O' && buffer[i] != 'P'
        && buffer[i] != ' ' && buffer[i] != '#' && buffer[i] != '\0'
        && buffer[i] != '\n')
            return 84;
    }
    return 0;
}

int error_handling(player_pos_t *s, char *buffer)
{
    if (check_map_char(buffer) != 0)
        return 84;
    for (int i = 0; buffer[i] != '\0'; i++)    {
        if (buffer[i] == 'P')
            s->p += 1;
        if (buffer[i] == 'O')
            s->o += 1;
        if (buffer[i] == 'X')
            s->x += 1;
        if (buffer[i] == '#')
            s->hashtag += 1;
    }
    if (s->p < 1 || s->p > 1 || s->o < 1 || s->x < s->o || s->hashtag < 12)
        return 84;
    s->fixe = s->o;
    return 0;
}
