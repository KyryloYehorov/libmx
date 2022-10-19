#include "../inc/header.h"
char *mx_strdup(const char *str) {
    int size = strlen(str);
    char *src = mx_strnew(size);
    mx_strcpy (src,str);
    return src;
}
