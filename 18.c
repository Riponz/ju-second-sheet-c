#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Ignore other characters
    }
}

int main() {
    char str[1000];

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    // Toggle the case of the string
    toggleCase(str);

    // Print the changed string
    printf("Changed string: %s\n", str);

    return 0;
}
