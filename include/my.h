/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    typedef struct player_pos_s   {
        int p;
        int o;
        int x;
        int fixe;
        int hashtag;
        int pos_x;
        int pos_y;
        int O_pos_x;
        int O_pos_y;
    } player_pos_t;


    void my_putchar (char c);
    int my_put_nbr(int nbr);
    int my_putstr(char const *str);
    int my_printf(const char *format, ...);
    char **str_to_w_array(char *str, char c);
    char *open_map(char *filepath);
    void print_real_map (char **arr);
    int print_map (player_pos_t *soko, char *filepath );
    int p_pos (char **arr, int i, player_pos_t *soko);
    int check_arr (char **arr, player_pos_t *soko);
    char move_p(int key, char **map, player_pos_t *soko);
    char ru_check1 (char **map, player_pos_t *soko, int ru);
    char ru_check2 (char **map, player_pos_t *soko, int ru);
    char ru_check3 (char **map, player_pos_t *soko, int ru);
    char ru_check4 (char **map, player_pos_t *soko, int ru);
    int h_flag (void);
    char x_move ( char **map, player_pos_t *soko);
    int error_handling(player_pos_t *soko, char *buffer);
    int ru_check1_v2 (char **map, player_pos_t *soko);
    int ru_check2_v2 (char **map, player_pos_t *soko);
    int ru_check3_v2 (char **map, player_pos_t *soko);
    int ru_check4_v2 (char **map, player_pos_t *soko);
    char o_condition_up (char **map, player_pos_t *soko, char ru);
    char o_condition_left (char **map, player_pos_t *soko, char ru);
    char o_condition_right (char **map, player_pos_t *soko, char ru);
    char o_condition_down (char **map, player_pos_t *soko, char ru);
    char **replace_o(char **copy, char **map);
    int win_condition_map(player_pos_t *soko, char **copy, char **map);
    char lose_condition (char **map);

#endif /* !MY_H_ */
