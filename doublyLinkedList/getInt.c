#include "list.h"

/**
 * getInt - function that get an integer
 * @msg: message to be printed
 * Return: a number
*/

#include <stdio.h>

int getInt(char *msg) {
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;
}