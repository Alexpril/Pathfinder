#include "pathfinder.h"

char *mx_pathfinder_error_invalid_name(char *str) {
    char *res = mx_file_to_str(str);

    if (res == NULL) {
        mx_printerr("error: file ");
        mx_printerr(str);
        mx_printerr(" does not exist\n");
        exit (-1);
    }
    if (*res == '\0') {
        mx_printerr("error: file ");
        mx_printerr(str);
        mx_printerr(" is empty\n");
        exit (-1);
    }
    if (*res == '\n') {
        mx_printerr("error: line 1 is not valid\n");
        exit (-1);
    }
    return res;
}

