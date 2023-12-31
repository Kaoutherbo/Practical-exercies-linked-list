#include "list.h"

/**
 * isEmpty - function that checks if the
 * list is empty or not
 * 
 * @list: doubly linked list
 * Return: true or false
*/
#include <stdbool.h>

bool isEmpty(List *list) {
    return list->head == NULL || list == NULL;
}
