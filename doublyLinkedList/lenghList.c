#include "list.h"

/**
 * nbrElements - funcction that calculate 
 * the number of elementsof list
 * 
 * @list: doubly linked list
 * Return: number of elements of list
*/

int lenghList(List * list)
{
    int count = 0;
    if(!isEmpty(list)){
    Node * current = list->head;
    while (current != list->tail) {
        count++;
        current = current->next;
        }
    }
    return count;  
}