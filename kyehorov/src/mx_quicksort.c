#include "../inc/header.h"

int mx_quicksort(char**arr, int left, int right) {
    int count = 0;
    if(arr == NULL)
        return -1;
    if (left < right) {
        int l = left;
        int r = right;
        int middle = (l + r) / 2;
        while (l <= r) {
            while (mx_strlen(arr[l]) < mx_strlen(arr[middle]))
                l++;
            while (mx_strlen(arr[r]) > mx_strlen(arr[middle]))
                r--;
            char *temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
            count++;
        }
        mx_quicksort(arr, left, r);
        mx_quicksort(arr, l, right);
    }
    return count;
}
