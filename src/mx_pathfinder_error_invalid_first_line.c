#include "pathfinder.h"

void mx_pathfinder_error_invalid_first_line(char *str) {
    for (int i = 0; str[i] != '\n'; i++) {
        if(!mx_isdigit(str[i])) {
            mx_printerr("error: line 1 is not valid\n");
            exit (-1);
        }
    }
    return;
}
