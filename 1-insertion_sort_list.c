#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - function to swap nodes in the linked list
 * @i: first node
 * @j: second node
*/
void swap(listint_t *i, listint_t *j)
{
    if (j->next)
    j->next->prev = i;
    if (i->prev)
    i->prev->next = j;
    i->next = j->next;
    j->prev = i->prev;
    i->prev = j;
    j->next = i;
}
/**
 * insertion_sort_list - function sorts list elements using the insertion sort algorithm
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next;
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    current = (*list)->next;
    while (current != NULL)
    {
        next = current;
        current = current->next;
        while (next && next->prev)
        {
            if (next->n < next->prev->n)
            {
                swap(next->prev, next);
                if (next->prev == NULL)
                    *list = next;
                print_list(*list);
            }
            else
            next = next->prev;
         }
    }
}