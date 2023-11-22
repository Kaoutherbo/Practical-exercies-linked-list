#include "list.h"

/**
 * getSize - function that get the size of the list
 * @msg: message to be printed
 * Return: size of list
*/

int getSize(char *msg)
{
    int size;
    printf("%s", msg);
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Error!, the size must be positive ");
        return getInt(msg);
    }
    else
        return size;
}