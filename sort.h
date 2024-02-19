#ifndef SORT_H
#define SORT_H

typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int array[], size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *i, listint_t *j);

#endif
