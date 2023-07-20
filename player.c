/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** player
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int p_pos (char **arr, int i, player_pos_t *soko)
{
    for ( int j = 0; arr[i][j] != '\0'; j++) {
        if (arr[i][j] == 'P') {
            soko->pos_x = i;
            soko->pos_y = j;
        }
    }
    return 0;
}

int check_arr (char **arr, player_pos_t *soko)
{
    for ( int i = 0; arr[i] != NULL; i++){
        p_pos(arr, i, soko);
    }
    return 0;
}
