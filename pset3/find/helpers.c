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

bool 
search(int value, int array[], int n)
{
    // TODO: re-implement as binary search
    for (int i = 0; i < n; i++)
        if (array[i] == value)
            return true;
    return false;
}


/*
 * Sorts array of n values.
 */

void 
sort(int values[], int n)
{
    // TODO: implement an O(n^2) sort
    for (i = 0; i < n; ++i){
    for (j = i + 1; j < n; ++j){
      if (values[i] > values[j]){
         a = values[i];
         values[i] = values[j];
         values[j] = a;
      }
   }
}
    return;
}
