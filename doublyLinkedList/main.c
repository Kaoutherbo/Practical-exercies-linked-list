#include "list.h"

/**
 * main - Entry point
 * 
 * Return: Always 0
*/

int main() {
    //  initialization of a list
    List* myList;
    initList(&myList);

    int option = getInt("Type 1 If you want to add elements in the beginnig\n Type 2 If you want to add elements at the end :  ");
    myList = createList(&myList, option);

    // Display the list
    printf("List after adding elements :\n");
    displayList(myList);

    // copying a list
    List* copiedList;
    initList(&copiedList);
    copiedList = copyList(copiedList, myList);

    // Display the copied list
    printf("\nCopied List:\n");
    displayList(copiedList);

    // Delete element in list 
    option = getInt("Type 1 for delete a node from the beginnig\nType 2 for delete a node at the end: ");
    myList = deleteOption(&myList, option);

    // Display the list after deleting from the beginning
    printf("\nThe list after deleting element is :\n");
    displayList(myList);
    
    // searching for an element
    int searchValue = getInt("Enter a value to search if it is exist in list or not : ");


    if ( searchElement(myList, searchValue) != -1) {
        printf("\nElement %d found at position %d.\n", searchValue,  searchElement(myList, searchValue));
    } else {
        printf("\nElement %d not found in the list.\n", searchValue);
    }

    // Free the memory allocated for the lists
    freeList(myList);
    freeList(copiedList);

    return 0;
}
