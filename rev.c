#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10; // Extract the last digit of the number
        reversed = reversed * 10 + remainder; // Add the last digit to the new variable in reverse order
        num /= 10; // Remove the last digit from the original number
    }
    
    printf("Reversed number = %d", reversed);
    
    return 0;
}



