#include "search_algos.h"
	int binarySearchRecursive(int array[], int left, int right, int objective) { 
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (array[mid] == objective) {
            return mid;
        }
        if (array[mid] > objective) {
            return binarySearchRecursive(array, left, mid - 1, objective);
        }
        return binarySearchRecursive(array, mid + 1, right, objective);
    } 
    return -1;
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: The first index where value is located, If value is not present
 *         in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{

}
