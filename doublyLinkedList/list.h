#ifndef LIST_H
#define LIST_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Node - struct for doubly linked list that contains
 * nodes that has a pointer to next and previous node 
 * 
 * @prev: pointer to the previous node
 * @next: pointer to the next node
*/
typedef struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

/**
 * List - a struct that contian pointer
 * for first and last elements in list
 * 
 * @head: pointer to the first element in list
 * @tail: pointer to the last element i list
*/
typedef struct List
{
    Node *head;
    Node *tail;
}List;


// prototype of functions
void initList(List** list);
bool isEmpty(List *list);
int lenghList(List * list);
List* addBegin(List * list, int val);
List* addEnd(List *list, int val) ;
List* insertElement(List * list, int val, int position);
void displayList(List* list);
void displayRevList(List* list);
List* deleteEnd(List *list);
List* deleteBegin(List *list);
void freeList(List *list);
int searchElement(List *list, int val);
List* copyList(List *list1, List **list2);
int getInt(char *msg);
List* createList(List **list, int option);
List* deleteOption(List** list, int option);

#endif