/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** win_lose
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int win_condition_map(player_pos_t *soko, char **copy, char **map)
{
    int o_count = soko->o;
    for (int y = 0; copy[y] != NULL; y++)
        for (int x = 0; copy[y][x] != '\0'; x++)
            (copy[y][x] == 'O' && map[y][x] == 'X') ? (o_count -= 1) : 0;
    if (o_count == 0)
        return 1;
    return 0;
}
