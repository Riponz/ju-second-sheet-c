#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        char currentChar = tolower(line[i]);

        if (isalpha(currentChar)) {
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
