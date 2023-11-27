#include "list.h"

/**
 * deleteOption - function that delete a nde due
 * to the option of the user
 * 
 * @list: pointer to doubly linked list
 * @option: 1 is for delete in the beginning ,2 is for delete at the end
 * Return: pointer to doubly linked list after deleting node
*/

List* deleteOption(List** list, int option)
{

    // deleting elements from the end
    if (option == 1)
        *list = deleteBegin(*list);
    // deleting elements from the beginning
    else if (option == 2)
        *list = deleteEnd(*list);
    return *list;
}
