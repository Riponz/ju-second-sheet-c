#include <stdio.h>

// Function to calculate the length of a string
int Strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy a string
void Strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate two strings
void Strcat(char *dest, const char *src) {
    int destLen = Strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[destLen + i] = src[i];
        i++;
    }
    dest[destLen + i] = '\0';
}

// Function to reverse a string
void Strrev(char *str) {
    int length = Strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

// Function to compare two strings
int Strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Strlen()\n");
        printf("2. Strcpy()\n");
        printf("3. Strcat()\n");
        printf("4. Strrev()\n");
        printf("5. Strcmp()\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string: %d\n", Strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                Strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                Strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);
                Strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 5:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (Strcmp(str1, str2) == 0) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are not equal\n");
                }
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
