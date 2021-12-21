/**************************************************************************** 
 * helpers.c
 *
 * CC50
 * Pset 3
 *
 * Helper functions for Problem Set 3.
 ***************************************************************************/

#include <cc50.h>

#include "helpers.h"

/*
 * Returns true if value is in array of n values, else false.
 */

bool search(int value, int array[], int n)
{
    // TODO: re-implement as binary search
    int c, first, last, middle, serach, array[100];
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] < value)
            first = middle + 1;
        else if (array[middle] == value)
        {
            return array[middle];
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        return 0;
}

/*
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    int i, j, a;
    // TODO: implement an O(n^2) sort
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (values[i] > values[j])
            {
                a = values[i];
                values[i] = values[j];
                values[j] = a;
            }
        }
    }
    return values;
}
