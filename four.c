#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check for the largest number using nested if statements
    if (num1 > num2) {
        if (num1 > num3)
            largest = num1;
        else
            largest = num3;
    } else {
        if (num2 > num3)
            largest = num2;
        else
            largest = num3;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}