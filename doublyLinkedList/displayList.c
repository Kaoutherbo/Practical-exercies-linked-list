#include "list.h"

/**
 * displayList - procedure that display 
 * the elements of list
 * 
 * @list: pointer to doubly linked list
 * Return: void
*/

void displayList(List* list)
{
    if (list == NULL || list->head == NULL) {
        printf("The List is empty or not initialize.\n");
        return;
    }

    Node *temp = list->head; 

    printf("The elements of the list  are : ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next; 
    }
    
}
