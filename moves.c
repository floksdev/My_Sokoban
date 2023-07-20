/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** moves
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

char ru_check1 (char **map, player_pos_t *soko, int ru)
{
    if (ru == KEY_UP) {
        ru_check1_v2(map, soko);
    }

    return ru;
}

char ru_check2 (char **map, player_pos_t *soko, int ru)
{
    if (ru == KEY_DOWN)  {
        ru_check2_v2(map, soko);
    }

    return ru;
}

char ru_check3 (char **map, player_pos_t *soko, int ru)
{
    if (ru == KEY_RIGHT)  {
        ru_check3_v2(map, soko);
    }

    return ru;
}

char ru_check4 (char **map, player_pos_t *soko, int ru)
{
    if (ru == KEY_LEFT)  {
        ru_check4_v2(map, soko);
    }

    return ru;
}
