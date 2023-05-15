#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Error: factorial is undefined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("%d! = %d\n", num, result);
    }
    
    return 0;
}

// Recursive implementation of the factorial function
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

