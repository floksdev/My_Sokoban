/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** ru_checkv26
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int ru_check1_v2 (char **map, player_pos_t *soko)
{
        if (map[soko->pos_x - 1][soko->pos_y] == 'X'){
            if (map[soko->pos_x - 2][soko->pos_y] == '#' ||
            map[soko->pos_x - 2][soko->pos_y] == 'X')
                return 0;
        map[soko->pos_x - 2][soko->pos_y] = 'X';
        }
        map[soko->pos_x][soko->pos_y] = ' ';
        map[soko->pos_x - 1][soko->pos_y] = 'P';
    return 0;
}

int ru_check2_v2 (char **map, player_pos_t *soko)
{
        if (map[soko->pos_x + 1][soko->pos_y] == 'X'){
            if (map[soko->pos_x + 2][soko->pos_y] == '#' ||
            map[soko->pos_x + 2][soko->pos_y] == 'X')
                return 0;
        map[soko->pos_x + 2][soko->pos_y] = 'X';
        }
        map[soko->pos_x][soko->pos_y] = ' ';
        map[soko->pos_x + 1][soko->pos_y] = 'P';
    return 0;
}

int ru_check3_v2 (char **map, player_pos_t *soko)
{
        if (map[soko->pos_x][soko->pos_y + 1] == 'X'){
            if (map[soko->pos_x][soko->pos_y + 2] == '#' ||
            map[soko->pos_x][soko->pos_y + 2] == 'X')
                return 0;
        map[soko->pos_x][soko->pos_y + 2] = 'X';
        }
        map[soko->pos_x][soko->pos_y] = ' ';
        map[soko->pos_x][soko->pos_y + 1] = 'P';
    return 0;
}

int ru_check4_v2 (char **map, player_pos_t *soko)
{
        if (map[soko->pos_x][soko->pos_y - 1] == 'X'){
            if (map[soko->pos_x][soko->pos_y - 2] == '#' ||
            map[soko->pos_x][soko->pos_y - 2] == 'X')
                return 0;
        map[soko->pos_x][soko->pos_y - 2] = 'X';
        }
        map[soko->pos_x][soko->pos_y] = ' ';
        map[soko->pos_x][soko->pos_y - 1] = 'P';
    return 0;
}
