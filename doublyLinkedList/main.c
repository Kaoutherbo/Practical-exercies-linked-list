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

    if (isEmpty(myList))
    {
        printf("The list is empty ");
    }
    
    int option, position;
    do
    {
        option = getInt("\nType 1 If you want to add elements at the beginning\nType 2 If you want to add elements at the end: ");
    } while (option != 1 && option != 2);
    
    // create list
    myList = createList(&myList, option);

    // lenght of list 
    printf("\nThe lenght of this list is %d", lenghList(myList));

    // Display the list
    printf("\nList after adding elements:\n");
    displayList(myList);


    // Display list in reverse
    printf("\nThe elements of the list in reverse are : ");
    displayRevList(myList);

    do
    {
        printf("\nEnter a position to add a node : ");
        scanf("%d", &position);
    } while (position > lenghList(myList) + 1 && position <= 0);
    
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    // Add an element at the given position
    myList = insertElement(myList, num, position);
    printf("\nThe list after inserting a node in position %d is : ", position);
    displayList(myList);
    // search element
    printf("\nEnter a number to search: ");
    scanf("%d", &num);

    if (searchElement(myList, num) != -1)
    {
        printf("\nElement %d found at position %d.\n", num, searchElement(myList, position));
    } else {
        printf("\nElement %d not found in the list.\n", num);
    }
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
