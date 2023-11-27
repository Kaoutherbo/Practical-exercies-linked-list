#include "list.h"

/**
 * main - Entry point
 * 
 * Return: Always 0
*/

int main() {
    // Initialization of a list
    List *myList;
    initList(&myList);
    int option;
    do
    {
         option = getInt("Type 1 If you want to add elements at the beginning\nType 2 If you want to add elements at the end: ");
    } while (option != 1 && option != 2);
    
    // create list
    myList = createList(&myList, option);

    // Display the list
    printf("List after adding elements:\n");
    displayList(myList);

    do
    {
         option = getInt("\nType 1 for deleting a node from the beginning\nType 2 for deleting a node from the end: ");
    } while (option != 1 && option != 2);
    
    // Delete element in the list
    myList = deleteOption(&myList, option);

    // Display the list after deleting
    printf("\nThe list after deleting element is:\n");
    displayList(myList);

    // Free the memory allocated for the lists
    freeList(myList);

    return 0;
}
