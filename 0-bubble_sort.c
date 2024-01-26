#include "sort.h"

/**
 * swap_ints _ swap 2 interger in the array
 * @a: the 1st interger to swap
 * @b: the 2nd integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
/**
 * bubble_sort - sort the array integer in ascending order
 * @array: the array of integer to sort
 * @size: the size of the array
 * description: print the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
