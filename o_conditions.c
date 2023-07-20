/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** O_conditions
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

char o_condition_up (char **map, player_pos_t *soko, char ru)
{
    if ( map[soko->pos_x - 1][soko->pos_y] == 'O'){
        soko->O_pos_x = soko->pos_x - 1;
        soko->O_pos_y = soko->pos_y;
        map[soko->pos_x - 1][soko->pos_y] = ' ';
    }
    return ru;
}

char o_condition_down (char **map, player_pos_t *soko, char ru)
{
    if ( map[soko->pos_x + 1][soko->pos_y] == 'O'){
        soko->O_pos_x = soko->pos_x + 1;
        soko->O_pos_y = soko->pos_y;
        map[soko->pos_x + 1][soko->pos_y] = ' ';

    }
    return ru;
}

char o_condition_right (char **map, player_pos_t *soko, char ru)
{
    if ( map[soko->pos_x][soko->pos_y + 1] == 'O'){
        soko->O_pos_x = soko->pos_x;
        soko->O_pos_y = soko->pos_y + 1;
        map[soko->pos_x][soko->pos_y + 1] = ' ';
    }
    return ru;
}

char o_condition_left (char **map, player_pos_t *soko, char ru)
{
    if ( map[soko->pos_x][soko->pos_y - 1] == 'O'){
        soko->O_pos_x = soko->pos_x;
        soko->O_pos_y = soko->pos_y - 1;
        map[soko->pos_x][soko->pos_y - 1] = ' ';
    }
    return ru;
}

char **replace_o(char **copy, char **map)
{
    for (int y = 0; copy[y] != NULL; y++)
        for (int x = 0; copy[y][x] != '\0'; x++)
            (copy[y][x] == 'O' && map[y][x] == ' ') ? (map[y][x] = 'O') : 0;
    return (map);
}
