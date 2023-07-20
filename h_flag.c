/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-tristan.wehrle
** File description:
** h_flag
*/

#include "include/my.h"

int h_flag (void)
{
    my_printf("USAGE\n");
    my_printf("\t./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("\tmap file representing the warehouse map,");
    my_printf(" containing ‘#’ for walls,\n");
    my_printf("\t‘P’ for the player, ‘X’ for boxes");
    my_printf(" and ‘O’ for storage locations.\n");

    return 0;
}
