/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

void initialiser(player_pos_t *soko)
{
    soko->p = 0;
    soko->o = 0;
    soko->x = 0;
    soko->fixe = 0;
    soko->hashtag = 0;
    soko->pos_x = 0;
    soko->pos_y = 0;
    soko->O_pos_x = 0;
    soko->O_pos_y = 0;
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        h_flag();
        return 0;
    }
    if (ac != 2)
        return 84;
    player_pos_t *soko = malloc(sizeof(player_pos_t));
    char *filepath = av[1];
    initialiser(soko);
    if (print_map(soko, filepath) != 0)
        return 84;
    return 0;
}
