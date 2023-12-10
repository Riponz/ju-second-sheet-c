#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1000];

    // Input the line of text
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Convert each alphabet character to uppercase
    for (int i = 0; line[i] != '\0'; ++i) {
        line[i] = toupper(line[i]);
    }

    // Print the result
    printf("Converted text to uppercase: %s", line);

    return 0;
}
