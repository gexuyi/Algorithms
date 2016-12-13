#include "sort.h"

//
// [in]:  a list not sort
// [out]: a sort list
//
bool insert_sort(key_t arr[], int len)
{
    if (!arr || len<=0)
        return false;

    if (len == 1)
        return true;

    int i, j;
    key_t key;
    for (i=1; i<len; i++)
    {
        key = arr[i];
        for (j=i-1; j>-1 && key < arr[j]; j--)
            arr[j+1] = arr[j];
        arr[j+1] = key;
    }

    return true;
}

