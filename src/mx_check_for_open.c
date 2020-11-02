#include "pathfinder.h"

void mx_check_for_open(int argc, char **argv) {
    mx_pathfinder_error_invalid_argc(argc); //проверка количества аргументов
    char *str = mx_pathfinder_error_invalid_name(argv[1]); //проверка файла и на пустой
    mx_pathfinder_error_invalid_first_line(str); //проверка 1 строки
    mx_strdel(&str);
}
