#include "list.h"

/**
 * createList - function that create a list due
 * to the option of the user
 * 
 * @list: pointer to doubly linked list
 * @option: 1 is for add elements in the beginning ,
 * 2 is for add elements at the end
 * Return: pointer to new doubly linked list
*/

List* createList(List **list, int option)
{
    int size = getInt("Enter the size of list : ");
    //  adding elements to the beginning of the list
    for (size_t i = 0; i < size; i++)
    {
        int num = getInt("Enter an element : ");
        if (option == 1)
            *list = addBegin(*list, num);
        else if (option == 2)
            *list = addEnd(*list, num);
    }
    return *list;
}

