#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly_linked_list
 *
 * @n: Int
 * @index: Index ye nod in list
 * @next: Poynda 2 the next_nod
 *
 * Description: singly_linked_list nod_structur£
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly_linked_list an expres_lane
 *
 * @n: Int
 * @index: Index ye nod in the list
 * @next: Poynta to the nxt nod
 * @express: Poynta 2 nxt nod in express lane
 *
 * Description: singly_linked_list nod_structure
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *arhray, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
