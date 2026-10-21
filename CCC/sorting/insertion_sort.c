#include <stdio.h>

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {   /* shift larger elements right */
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;                  /* drop the key into the gap */
    }
}

int main(void) {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    insertion_sort(a, 7);
    print_array(a, 7);   /* 3 9 10 27 38 43 82 */
    return 0;
}