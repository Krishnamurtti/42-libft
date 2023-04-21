#include <libft.h>

int isalpha(int c) 
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* Comprobamos si el carácter es una letra mayúscula o una letra minúscula. 
Si el carácter es una letra del alfabeto, la función devuelve 1. 
De lo contrario, devuelve 0. */