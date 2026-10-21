#include <stdio.h>

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/* merge sorted arr[lo..mid-1] and arr[mid..hi-1] */
void merge(int arr[], int tmp[], int lo, int mid, int hi) {
    int i = lo, j = mid, k = lo;
    while (i < mid && j < hi) {
        if (arr[i] <= arr[j])            /* <= keeps it stable */
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    while (i < mid)                      /* leftovers from the left half */
        tmp[k++] = arr[i++];
    while (j < hi)                       /* leftovers from the right half */
        tmp[k++] = arr[j++];
    for (k = lo; k < hi; k++)            /* copy back */
        arr[k] = tmp[k];
}

/* sorts arr[lo..hi-1] */
void merge_sort(int arr[], int tmp[], int lo, int hi) {
    if (hi - lo <= 1)                    /* base case: 0 or 1 element */
        return;
    int mid = lo + (hi - lo) / 2;
    merge_sort(arr, tmp, lo, mid);
    merge_sort(arr, tmp, mid, hi);
    merge(arr, tmp, lo, mid, hi);
}

int main(void) {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int tmp[7];
    merge_sort(a, tmp, 0, 7);
    print_array(a, 7);   /* 3 9 10 27 38 43 82 */
    return 0;
}