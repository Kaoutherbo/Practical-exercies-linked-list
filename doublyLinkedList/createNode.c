#include "list.h"

/**
 * createNode - function 
 *
 */

Node* createNode(int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Error: Memory can't be allocated.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
