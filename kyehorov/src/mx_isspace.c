#include "../inc/header.h"
bool mx_isspace(char c) {
    if((c >= 9 && c <= 13 )|| c == 32 || c == '\0' || c == ' ' || c == '\t')
        {
        return true;
        }
    return false;
}
