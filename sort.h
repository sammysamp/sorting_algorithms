#ifndef SORTS_H
#define SORTS_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

int max_value(int *array, size_t size);
int partition(int *A, int start, int end, size_t size);
void quick(int *array, int start, int end, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void max_heapify(int *array, size_t size, size_t i, size_t print_size);
void merger(int *arr, int  *left, int *right, int s_left, int s_right);
void swap_nodes(listint_t **turtle, listint_t **rabbit, listint_t **list);
#endif
