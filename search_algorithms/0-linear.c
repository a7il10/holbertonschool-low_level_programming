#include "search_algos.h"

/**
 * linear_search - This function implements the linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not present
 * in array or if array is NULL.
 */
 size_t i;
 
int linear_search(int *array, size_t size, int value) {

    if (array == NULL) {
        return -1;
    }

    for (i = 0; i < size; i++) {

        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value) {
            return i;
        }
    }
    return 0;
}
