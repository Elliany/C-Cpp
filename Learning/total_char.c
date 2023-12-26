#include <stdio.h>

int main() {
    // Initialize counters and an array to store the input string
    int blanks = 0, digits = 0, total_chars = 0;
    char inputString[100];  // Assuming a maximum of 100 characters, adjust as needed

    printf("Enter a string of characters: ");

    // Loop to read characters until a newline is encountered
    for (int i = 0; (inputString[i] = getchar()) != '\n'; ++i) {
        if (inputString[i] == ' ')
            ++blanks;  // Increment blanks counter if the character is a space
        else if (inputString[i] >= '0' && inputString[i] <= '9')
            ++digits;  // Increment digits counter if the character is a digit

        ++total_chars;  // Increment total_chars for every character (including spaces and digits)
    }

    // Null-terminate the string
    inputString[total_chars] = '\0';

    // Print the input string and counts
    printf("Input String: %s\n", inputString);
    printf("Blanks: %d\n", blanks);
    printf("Digits: %d\n", digits);
    printf("Total: %d\n", total_chars);

    return 0;
}
