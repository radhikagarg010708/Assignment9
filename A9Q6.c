//Write one function that returns the sum, difference, product, and quotient of two integers through pointer parameters. Handle division by zero.
#include <stdio.h>

void arithmeticOperations(int a, int b, int *sum, int *difference,
                          int *product, float *quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
    else
        *quotient = 0;
}

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    arithmeticOperations(a, b, &sum, &difference, &product, &quotient);

    printf("\n--- Arithmetic Operations ---\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Quotient = Undefined (division by zero)\n");

    return 0;
}
