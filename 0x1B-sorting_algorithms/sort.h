#ifndef INC_0X1B_SORTING_ALGORITHMS_SORT_H
#define INC_0X1B_SORTING_ALGORITHMS_SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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

/* 0. Bubble sort  */
void bubble_sort(int *array, size_t size);

/* 1. Insertion sort */
void insertion_sort_list(listint_t **list);
void swap(listint_t *left, listint_t *node_2, listint_t **list);

/* 2. Selection sort */
void selection_sort(int *array, size_t size);

/* 3. Quick sort  */
void quick_sort(int *array, size_t size);
void algorithm_quick_sort(int *array, size_t lo, size_t hi, size_t size);
size_t	partition(int *array, size_t lo, size_t hi, size_t size);

/* 4. Shell sort - Knuth Sequence */
void shell_sort(int *array, size_t size);
size_t gap(size_t limit);

/* 5. Cocktail shaker sort*/
void cocktail_sort_list(listint_t **list);
void algorithm_cocktail_sort(listint_t **list);
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2);

/* 6. Counting sort */
void counting_sort(int *array, size_t size);
void algorithm_counting_sort(int *array, int size, int max);

/* 7. Merge sort */
void merge_sort(int *array, size_t size);
void TopDownMergeSort(int *A, int *B, size_t n);
void TopDownSplitMerge(int *B, size_t iBegin, size_t iEnd, int *A);
void TopDownMerge(int *A, size_t iBegin, size_t iMiddle, size_t iEnd, int *B);
void CopyArray(int *A, size_t iBegin, size_t iEnd, int *B);

/* 9. Radix sort */
void radix_sort(int *array, size_t size);
int get_digits_number(int n);
void algorithm_radix_sort(int *array, int *buckets, int size, int max_digits);
int _pow_recursion(int x, int y);

/* 11. Quick Sort - Hoare Partition scheme */
void quick_sort_hoare(int *array, size_t size);
void algorithm_quick_sort_h(int *array, size_t lo, size_t hi, size_t size,
		size_t p);
size_t	partition_h(int *array, size_t lo, size_t hi, size_t size);

#endif /*INC_0X1B_SORTING_ALGORITHMS_SORT_H*/
