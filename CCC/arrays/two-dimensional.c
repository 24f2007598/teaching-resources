#include <stdio.h>


void initialising_an_array();
void sum_of_matrix();


int main() {
    initialising_an_array();
    // sum_of_matrix();
    return 0;
}


void initialising_an_array() {
    int sum[2][2];        // {{0,0}, {0,0}}            // all elements set to 0

    int m1[2][3] = {{1, 2, 3}, {4, 5, 6}};   // row-wise
    int m2[2][3] = {1, 2, 3, 4, 5, 6};       // continuous
    int m3[][3]  = {{1, 2, 3}, {4, 5, 6}};   // row count can be omitted, column count cannot    

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }    

}

void sum_of_matrix() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {1, 1}};
    int sum[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}