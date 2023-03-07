#include <stdio.h>
#include <string.h>
// Hi ....this is syntax //
int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1; // Initialize to true
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // We use fgets to read the string, as it also reads the newline character
/*this is syntax*/    
    len = strlen(str);
    
    // Remove the newline character from the string
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    // Check if the string is a palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Set to false if the characters don't match
            break;
        }
    }
    
    if (isPalindrome) {
        printf("%s is a palindrome.", str);
    } else {
        printf("%s is not a palindrome.", str);
    }
    
    return 0;
}

