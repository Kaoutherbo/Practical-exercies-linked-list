#include "list.h"

/**
 * getNum - function that get number 
 * @msg: message to be printed
 * Return: number
*/
int getNum(char *msg)
{
    int size;
    printf("%s", msg);
    scanf("%d", &size);
        return size;
}

/**
 * getSize - function that get the size of the list
 * @msg: message to be printed
 * Return: size of list
*/

int getSize(char *msg)
{
    int size = getNum(msg);
    if (size <= 0)
    {
        printf("Error!, Invalid input!");
        return getSize(msg);
    }
    else
        return size;
}