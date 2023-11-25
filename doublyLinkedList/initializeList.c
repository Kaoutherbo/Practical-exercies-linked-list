#include "list.h"

/**
 * initList - procedure that initialize the list
 * 
 * @list: doubly linked list
 * Return: void
*/
void initList(List** list)
{
    (*list)->head = NULL;
    (*list)->tail = NULL;
}