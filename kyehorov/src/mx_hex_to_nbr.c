#include "../inc/header.h"
bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

unsigned long mx_hex_to_nbr(const char *hex)
{
    if(hex == NULL) {
        return 0;
    }
    unsigned long int decimal = 0;
    unsigned long int base = 1;
    int i = 0;
    int size = 0;
    while (hex[size] != '\0')
        size++;
    size--;
    for (i = size; i >= 0; i--)
    {
        if (mx_isdigit(hex[i])) 
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (mx_isupper(hex[i])) 
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (mx_islower(hex[i])) 
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return decimal;
}

bool mx_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return true;
    }
    else
        return false;
}

bool mx_isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool mx_islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool mx_isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    else {
    return false;
    }
}
