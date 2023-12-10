#include <stdio.h>
#include <ctype.h>

void encodeLine(char line[]) {
    for (int i = 0; line[i] != '\0'; ++i) {
        if (isalpha(line[i])) {
            if (islower(line[i])) {
                // For lowercase letters, replace with the next alphabet
                line[i] = (line[i] - 'a' + 1) % 26 + 'a';
            } else {
                // For uppercase letters, replace with the next alphabet
                line[i] = (line[i] - 'A' + 1) % 26 + 'A';
            }
        } else if (isdigit(line[i])) {
            // For digits, replace with the next digit
            line[i] = (line[i] - '0' + 1) % 10 + '0';
        }
        // Ignore other characters
    }
}

int main() {
    char line[1000];

    // Input a line of text
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Remove the newline character from the input
    line[strcspn(line, "\n")] = '\0';

    // Encode the line
    encodeLine(line);

    // Print the newly generated line
    printf("Encoded line: %s\n", line);

    return 0;
}
