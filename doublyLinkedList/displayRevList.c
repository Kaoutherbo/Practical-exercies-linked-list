#include "list.h"

/**
 * displayRevList - procedure that display 
 * the elements of list in reverse order
 * 
 * @list: pointer to doubly linked list
 * Return: void
*/

void displayRevList(List* list)
{
    if (list == NULL || list->tail == NULL) {
        printf("The List is empty or not initialize.\n");
        return;
    }

    Node *temp = list->tail; 

    printf("The elements of the list in reverse are : ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev; 
    }
}