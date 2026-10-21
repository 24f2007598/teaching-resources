#include <stdio.h>

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void bubble_sort(int arr[], int n) {
    for (int p = 0; p < n - 1; p++) {         /* pass number */
        int swapped = 0;
        for (int j = 0; j < n - 1 - p; j++) { /* last p items already in place */
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped)                         /* no swaps: already sorted */
            break;
    }
}

int main(void) {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    bubble_sort(a, 7);
    print_array(a, 7);   /* 3 9 10 27 38 43 82 */
    return 0;
}