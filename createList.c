#include "list.h"

/**
 * createList - function that create list
 * 
 * @head: pointer to the first element of list
 * @size: number of nodes of list
 * Return: pointer to first element of list
*/
Element *createList(Element *head, int size)
{
    int num;
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d", &num);
       head = ajout_debut(head, num);
    }
    return head;
}