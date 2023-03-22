#include "function_pointers.h"

/**
  * array_iterator - function given as a parameter on each element of an array.
  * @array: array passed as param
  * @size: size
  * @action: action (function) to execute
  *
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
