#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume the first number is the largest initially
    largest = num1;

    // Check if the second number is larger
    if (num2 > largest)
        largest = num2;

    // Check if the third number is larger
    if (num3 > largest)
        largest = num3;

    printf("The largest number is: %d\n", largest);

    return 0;
}
