#include "pathfinder.h"

void mx_pathfinder_error_invalid_argc(int i) {
    if (i != 2) {
        mx_printerr("usage: ./pathfinder [filename]\n");
        exit (-1);
    }
    return;
}
