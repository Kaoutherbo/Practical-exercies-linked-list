#include "list.h"

/**
 * searchElement - function that
 * search for an elemnent in list and return its position
 * if it's not in list it returns -1
 * @list: pointer to doubly linked list
 * @val: value that we wanna search about it in list
 * Return: position of val in list or -1 if it's not found
*/

int searchElement(List *list, int val)
{
    if (list==NULL||list->head==NULL)
	{
        return -1; 
    }
    Node *currNode = list->head;
    int position = 0;
    while (currNode != NULL)                                                         
	{
        if (currNode->data == val)                        
		{
            return position;                                                                            
        }
        currNode = currNode->next;
        position++;
    }
    return -1; 
}