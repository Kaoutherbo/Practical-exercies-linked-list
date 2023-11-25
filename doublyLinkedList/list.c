#include "list.h"

void initList(List** list)
{
    (*list)->head = NULL;
    (*list)->tail = NULL;
}