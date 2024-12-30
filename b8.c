#include <stdio.h>


int uoc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Declare and assign values to two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Find the greatest common divisor of the two numbers
    int result = uoc(num1, num2);

    // Print the result
    printf("The greatest common divisor of %d and %d is: %d\n", num1, num2, result);

    return 0;
}