#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: a space before %c to consume any whitespace or newline left in the buffer

    // Check if the entered character is an alphabet using a ternary conditional operator
    int isAlphabet = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? 1 : 0;

    // Display the result
    if (isAlphabet)
        printf("The entered character is an alphabet.\n");
    else
        printf("The entered character is not an alphabet.\n");

    return 0;
}
