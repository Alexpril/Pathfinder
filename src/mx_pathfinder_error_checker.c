#include "pathfinder.h"

void mx_pathfinder_check_the_line(char *mat) {
    int line = 2;

    while (*mat != '\n')
        mat++;
    mat++;
    while (*mat) {
        mat = mx_check_first_word(mat, line);
        mat = mx_check_second_word(mat, line);
        mat = mx_check_third_word(mat, line);
        line++;
        if (*mat == '\0')
            break;
        mat++;
    }
}
