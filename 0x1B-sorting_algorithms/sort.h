#ifndef INC_0X1B_SORTING_ALGORITHMS_SORT_H
#define INC_0X1B_SORTING_ALGORITHMS_SORT_H

#include <stddef.h>

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


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *left, listint_t *node_2, listint_t **list);
void selection_sort(int *array, size_t size);


void shell_sort(int *array, size_t size);
size_t gap(size_t limit);

void merge_sort(int *array, size_t size);

void TopDownMergeSort(int *A, int *B, size_t n);
void TopDownSplitMerge(int *B, size_t iBegin, size_t iEnd, int *A);
void TopDownMerge(int *A, size_t iBegin, size_t iMiddle, size_t iEnd, int *B);
void CopyArray(int *A, size_t iBegin, size_t iEnd, int *B);

void quick_sort_hoare(int *array, size_t size);
void algorithm_quick_sort_h(int *array, size_t lo, size_t hi, size_t size);
size_t	partition_h(int *array, size_t lo, size_t hi, size_t size);

#endif /*INC_0X1B_SORTING_ALGORITHMS_SORT_H*/
