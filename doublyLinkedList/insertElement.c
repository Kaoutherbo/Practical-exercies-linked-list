#include "list.h"

/**
 * inseretElement - function that add node 
 * at special position
 * 
 * @list: doubly linked list pointer
 * @val: data for the new node
 * @position: the position where we add the new Node in list
 * Return: pointer to doubly linked list
*/

List* insertElement(List * list, int val, int position)
{
    if (list == NULL) {
        printf("Erreur : list not initialize.\n");
        exit(EXIT_FAILURE);
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erreur Memory can't be allocated.\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (position == 0)
    {
        return addBegin(list, val);
    } 
    else if (position == lenghList(list) + 1)
    {
        return addEnd(list, val);
    }
    else
    {
        Node *currNode = list->head;
        int pos = 0;

        while (currNode != NULL && pos < position - 1) {
            currNode = currNode->next;
            pos++;
        }
        if (currNode == NULL) {
            printf("Erreur : position invalide pour l'insertion.\n");
            free(newNode);
            exit(EXIT_FAILURE);
        }
        newNode->next = currNode->next;
        if (currNode->next != NULL) {
            currNode->next->prev = newNode;
        } else {
            list->tail = newNode;
        }
        currNode->next = newNode;
        newNode->prev = currNode;
    }
     return list;
}
