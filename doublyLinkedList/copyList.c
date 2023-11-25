#include "list.h"
/**
 * copyList - function that copies elements from list2 to list1
 * 
 * @list1: pointer to doubly linked list 1
 * @list2: pointer to doubly linked list 2
 * Return: list1 after copying elements of list2 into it
*/
List* copyList(List *list1, const List *list2)
{
    if (isEmpty(list1) || isEmpty(list2)) {
        printf("Erreur: Lists are not initialized.\n");
        // Handle the error, e.g., return NULL or an error code
        exit(EXIT_FAILURE);
    }

    freeList(list1);

    if (list2->head == NULL) {
        list1->head = NULL;
        list1->tail = NULL;
        return list1;
    }

    Node *temp = list2->head;
    list1->head = createNode(temp->data);
    if (list1->head == NULL) {
        printf("Erreur: Memory can't be allocated.\n");
        exit(EXIT_FAILURE);
    }

    Node *currNode = list1->head;
    temp = temp->next;

    while (temp != NULL) {
        currNode->next = createNode(temp->data);
        if (currNode->next == NULL) {
            printf("Erreur: Memory can't be allocated.\n");
            exit(EXIT_FAILURE);
        }

        currNode->next->prev = currNode;
        currNode = currNode->next;
        temp = temp->next;
    }

    list1->tail = currNode;

    return list1;
}