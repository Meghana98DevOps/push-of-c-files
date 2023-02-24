#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // We use unsigned long long to store large factorials
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // If the user enters a negative number, we print an error message and exit the program
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.");
        return 1;
    }
    
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d = %llu", num, factorial);
    
    return 0;
}

