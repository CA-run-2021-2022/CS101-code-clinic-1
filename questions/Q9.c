#include <stdio.h>

int collatz(int n) {
    
}

int main(void) {
    printf("Test case: 1\n");
    printf("Steps expected : 0\n");
    printf("Number of steps: %d\n", collatz(1));

    printf("Test case: 2\n");
    printf("Steps expected : 1\n");    
    printf("Number of steps: %d\n", collatz(2));

    printf("Test case: 3\n");
    printf("Steps expected : 7\n");    
    printf("Number of steps: %d\n", collatz(3));

    printf("Test case: 5\n");
    printf("Steps expected : 5\n");    
    printf("Number of steps: %d\n", collatz(5));

    printf("Test case: 7\n");
    printf("Steps expected : 16\n");    
    printf("Number of steps: %d\n", collatz(7));

    printf("Test case: 27\n");
    printf("Steps expected : 111\n");    
    printf("Number of steps: %d\n", collatz(27));
}