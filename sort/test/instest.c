#include "sort.h"

void dump_arr(key_t arr[], int len)
{
    int idx;
    for (idx=0; idx<len; idx++)
    {
        // FIXME: use diff type
        printf("%d ", arr[idx]);
    }
    puts("--------");
}

int main()
{
    key_t orig_arr[] = {3, 2, 5, 9, 4, 1, 5};
    int arr_len = sizeof(orig_arr)/sizeof(orig_arr[0]);
    dump_arr(orig_arr, arr_len);
    insert_sort(orig_arr, arr_len);
    dump_arr(orig_arr, arr_len);

    return 0;
}

