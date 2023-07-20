/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** moves2
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

char move_p(int key, char **map, player_pos_t *soko)
{

    if (map[soko->pos_x - 1][soko->pos_y] != '#'){
        o_condition_up(map, soko, key);
        ru_check1(map, soko, key);
    }
    if (map[soko->pos_x + 1][soko->pos_y] != '#'){
        o_condition_down(map, soko, key);
        ru_check2(map, soko, key);
    }
    if (map[soko->pos_x][soko->pos_y + 1] != '#'){
        o_condition_right(map, soko, key);
        ru_check3(map, soko, key);
    }
    if (map[soko->pos_x][soko->pos_y - 1] != '#'){
        o_condition_left(map, soko, key);
        ru_check4(map, soko, key);
    }
    return key;
}
