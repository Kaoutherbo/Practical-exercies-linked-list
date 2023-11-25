#ifndef LIST_H
#define LIST_H

// Header files
#include <stdio.h>
#include <stdlib.h>

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


#endif