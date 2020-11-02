#include "pathfinder.h"

void mx_pathfinder_error_too_big(int a, int b) {
    long sum = (long)a + (long)b;
    if(sum > INT32_MAX || sum < 0) {
        mx_printerr("error: sum of bridges lengths is too big\n");
        exit(-1);
    }
}
