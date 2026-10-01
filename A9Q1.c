//Write separate pass-by-value functions to calculate the addition, subtraction, multiplication, division, and modulus of two integers. Handle division and modulus by zero.

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

void divide(int a, int b) {
    if (b == 0)
        printf("Division by zero is not allowed.\n");
    else
        printf("Division = %.2f\n", (float)a / b);
}

void modulus(int a, int b) {
    if (b == 0)
        printf("Modulus by zero is not allowed.\n");
    else
        printf("Modulus = %d\n", a % b);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", subtract(a, b));
    printf("Multiplication = %d\n", multiply(a, b));

    divide(a, b);
    modulus(a, b);

    return 0;
}
