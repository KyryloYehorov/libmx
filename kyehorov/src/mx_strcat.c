#include "../inc/header.h"
char *mx_strcat(char *s1, const char *s2)
{
    int len = mx_strlen(s2);
    for(int i = 0; i <= len; i++) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    while (*s1 == *s2) {
        s1 = "\0";
    }
    return s1;
}
