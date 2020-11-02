#include "pathfinder.h"
#include "stdio.h"
void mx_pathfinder_duplicate_bridges(char **words, int len){
    for(int i = 1; i < len; i++) {
        for(int j = 1; j < len; j++) {
            if(j == i) continue;
            if(!mx_strncmp(words[i], words[j], 3)) {
            printf("%i == %i\n", i , j);
                mx_printerr("error: duplicate bridges\n");
                exit(-1);
            }
            char *reverse = mx_strndup(words[j], 3);
            mx_str_reverse(reverse);
            printf("words[%i] = %s\n",j, words[j]);
            if(!mx_strncmp(words[i], reverse, 3)) {
                mx_printerr("error: duplicate bridges\n");
                exit(-1);
            }
        }
    }
}
