#include <stdio.h>


void declaring_an_array();
void initialising_an_array();
void sum_of_array();


int main() {
    // declaring_an_array();
    // initialising_an_array();
    sum_of_array();
    return 0;
}


void declaring_an_array() {
    int marks[5];        // array of 5 integers
    float prices[10];    // array of 10 floats
    char name[20];       // array of 20 characters

    printf("Size of marks array: %lu bytes\n", sizeof(marks));
}

void initialising_an_array() {
    int a[5] = {10, 20, 30, 40, 50};   // full initialization
    int b[5] = {1, 2};                 // partial: remaining elements become 0
    int c[] = {5, 10, 15};             // size inferred as 3
    int d[5] = {0};                    // all elements set to 0

    // Run-time initialization using a loop
    int e[5];
    for (int i = 0; i < 5; i++) {
        e[i] = i * i;
    }

    printf("b[3] = %d\n", b[3]);       // prints 0
    printf("e[4] = %d\n", e[4]);       // prints 16
}

void sum_of_array() {
    int num[5] = {1,2,3,4};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }
    printf("SUM = %d\n", sum);
}