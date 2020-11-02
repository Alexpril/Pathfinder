#include "pathfinder.h"

char **mx_pathfinder_error_check_all(char **argv, int argc, int *isl_count) {
    char *str = NULL;
    char **matrix = NULL;
    mx_pathfinder_error_invalid_argc(argc); //проверка количества аргументов
    str = mx_pathfinder_error_invalid_name(argv[1]); //проверка файла и на пустой
    mx_pathfinder_error_invalid_first_line(str); //проверка 1 строки
    matrix = mx_pathfinder_matrix_init(str, isl_count);
    mx_pathfinder_check_the_line(str);
    mx_strdel(&str);
    return matrix;
}
