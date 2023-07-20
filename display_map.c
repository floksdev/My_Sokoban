/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-tristan.wehrle
** File description:
** bs_sokoban
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

char *open_map(char *filepath)
{
    struct stat sb;
    stat(filepath, &sb);
    int size = sb.st_size;
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));
    read(fd, buffer, size);
    if ( fd == -1)
        return NULL;
    return buffer;
}

void print_real_map (char **arr)
{
    clear();
    for (int i = 0; arr[i] != NULL; i++) {
        printw("%s\n", arr[i]);
    }
    refresh();
}

char **restart_map(char **copy, char **map)
{
    for (int y = 0; copy[y] != NULL; y++)
        for (int x = 0; copy[y][x] != '\0'; x++)
            map[y][x] = copy[y][x];
    return (map);
}

void pregame(char **map)
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(false);
    noecho();
    print_real_map(map);
}

int print_map(player_pos_t *soko, char *filepath)
{
    char *buffer = open_map(filepath);
    if (buffer == NULL || error_handling(soko, buffer) != 0)
        return 84;
    char **map = str_to_w_array(buffer, '\n');
    char **copy = str_to_w_array(buffer, '\n');
    int q = 0;
    pregame(map);
    while (1) {
        check_arr(map, soko);
        q = getch();
        if (q == ' ')
            map = restart_map(copy, map);
        move_p(q, map, soko);
        map = replace_o(copy, map);
        print_real_map(map);
        if (win_condition_map(soko, copy, map) == 1)
            break;
    }
    endwin();
    return 0;
}
