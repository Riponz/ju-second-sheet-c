#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char inputString[100];


    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    inputString[strcspn(inputString, "\n")] = '\0';


    printf("String in reverse order: ");
    for (int i = strlen(inputString) - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }
    printf("\n");


    if (isPalindrome(inputString)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
