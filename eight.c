#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase to simplify the check
    ch = tolower(ch);

    // Check if the entered character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("The entered character is a vowel.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("The entered character is a consonant.\n");
    else
        printf("The entered character is not a letter.\n");

    return 0;
}
