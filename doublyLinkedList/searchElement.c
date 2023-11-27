#include "list.h"

/**
 * searchElement - function that
 * searches for an element in the list and returns its position
 * if it's not in the list, it returns -1
 * @list: pointer to doubly linked list
 * @val: value that we want to search for in the list
 * Return: position of val in the list or -1 if it's not found
*/

int searchElement(List *list, int val)
{
    if (list == NULL || list->head == NULL)
    {
        return -1;
    }
    Node *currNode = list->head;
    int pos = 1;
    while (currNode != NULL)
    {
        if (currNode->data == val)
        {
            return pos;
        }
        currNode = currNode->next;
        pos++;
    }
    return -1;
}