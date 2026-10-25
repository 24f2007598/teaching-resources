#include <stdio.h>

int* normal_traversal(int*, int);
void pointer_without_loop(int*);
void pointer_with_loop(int*, int);
void pointer_with_loop_increment_1(int*, int);
void pointer_with_loop_increment_2(int*, int);

void some_function(float RESULT[]);
void balance_return(float* bal);

int main() {
    int N = 5; int arr2[N];
   
    int arr[] = {9,3,1,2,8};
    int* arr1 = arr;
    
    printf("\nTRAVERSING THE SAME ARRAY USING DIFFERENT METHODS\n");

    // int* arr_3 = normal_traversal(arr1, N);

    // pointer_without_loop(arr1);
    // pointer_with_loop(arr1, N);
    // pointer_with_loop_increment_1(arr1, N);
    // pointer_with_loop_increment_2(arr1, N);

    // for(int i=0; i < 5; i++) {
    //     printf("%d ", arr_3[i]);
    // }

    // float RESULT[2];
    // some_function(RESULT);

    // for(int i=0; i < 2; i++) {
    //     printf("%f ", RESULT[i]);
    // }

    float curr_bal = 100.0; //ox204
    float* ptr = &curr_bal;

    printf("balance %f\n", curr_bal);
    balance_return(ptr);
    printf("balance %f\n", curr_bal);


    printf("\n\n");
    return 0;
}


void some_function(float RESULT[]) {
    float reim = 100.0;
    float ex_lim = 23.0;

    RESULT[0] = reim;
    RESULT[1] = ex_lim;
}

void balance_return(float* bal) {
    *bal = 100+20; //ox204
}

int* normal_traversal(int* arr, int N) {
    printf("\n1. Index based access: { ");
    for (int i=0; i < N; i++) {
        printf("%d  ", arr[i]);  //index i
    }
    printf("}\n");

    return arr;
}

void pointer_without_loop(int* arr) {
    printf("\n2. POINTER BASED_1: { ");
// {9,3,1,2,8}
    printf("%d  ", *arr);
    printf("%d  ", *(arr+1));
    printf("%d  ", *(arr+2));
    printf("%d  ", *(arr+3));
    printf("%d }\n", *(arr+4));
}

void pointer_with_loop(int* arr, int N) {
    printf("\n3. POINTER BASED_2: { ");
    for (int i=0; i < N; i++) {
        printf("%d  ", *(arr+i)); //increment by i from 0
    }
    printf("}\n");
}


void pointer_with_loop_increment_1(int* arr, int N) {
    printf("\n3. POINTER BASED_3: { ");
    for (int i=0; i < N; i++) {
        printf("%d  ", *arr); //{9,3,1,2,8}
        arr++;        // arr = arr + 1
                   // increment by 1 each time using ++
    }
    printf("}\n");

}
void pointer_with_loop_increment_2(int* arr, int N) {
    printf("\n4. POINTER BASED_4: { ");
    for (int i=0; i < N; i++) {
        printf("%d  ", *arr++); // increment by 1 each time using ++ and dereference in the same line
    }
    printf("}\n\n");
}

