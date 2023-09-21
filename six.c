#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the entered character is an uppercase or lowercase alphabet
    if ((ch >= 'a' && ch <= 'z'))
        printf("The entered character is a lowercase alphabet.\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("The entered character is an uppercase alphabet.\n");
    else
        printf("The entered character is not an alphabet.\n");

    return 0;
}
