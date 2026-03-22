#include <stdio.h>
#include <stdlib.h>

// Structure Definition
typedef struct {
    char label[20];
    int result_value;
} OperationResult;

// Function Prototypes
int multiply(int a, int b);
int subtract(int a, int b);
int sum_of_digits_recursive(int n);
void swap_by_pointer(int *a, int *b);
void find_and_swap_largest_smallest(int *n1, int *n2, int *n3);

int main() {
    int n1, n2, n3;
    
    // Read three integers
    printf("Enter three integers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Functions and Structure Array
    OperationResult results[2];
    
    results[0].result_value = multiply(n1, n2);
    sprintf(results[0].label, "Multiplication");

    results[1].result_value = subtract(n3, n1);
    sprintf(results[1].label, "Subtraction");

    printf("\nResults Stored in Structure:\n");
    printf("Operation: %s, Result: %d\n", results[0].label, results[0].result_value);
    printf("Operation: %s, Result: %d\n", results[1].label, results[1].result_value);

    // Recursive Sum of Digits
    printf("\nRecursive Calculation:\n");
    int digit_sum = sum_of_digits_recursive(n1);
    printf("Sum of digits of %d: %d\n", n1, digit_sum);

    // Swapping Largest and Smallest using Pointers
    printf("\nPointer Swapping:\n");
    printf("Before swap: n1=%d, n2=%d, n3=%d\n", n1, n2, n3);

    find_and_swap_largest_smallest(&n1, &n2, &n3);

    printf("After swap:  n1=%d, n2=%d, n3=%d\n", n1, n2, n3);
    
    return 0;
}

// Function Definitions

int multiply(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}

int sum_of_digits_recursive(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits_recursive(n / 10);
}

void swap_by_pointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void find_and_swap_largest_smallest(int *n1, int *n2, int *n3) {
    int *pointers[3] = {n1, n2, n3};
    int *largest_ptr = n1;
    int *smallest_ptr = n1;
    
    for (int i = 0; i < 3; i++) {
        if (*pointers[i] > *largest_ptr) {
            largest_ptr = pointers[i];
        }
        if (*pointers[i] < *smallest_ptr) {
            smallest_ptr = pointers[i];
        }
    }

    if (largest_ptr != smallest_ptr) {
        swap_by_pointer(smallest_ptr, largest_ptr);
    }
}