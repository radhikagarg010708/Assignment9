//Write pass-by-value functions to check whether a number is even or odd, positive, negative or zero, prime, and perfect. Display a complete classification report.
#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isPositive(int n) {
    return n > 0;
}

int isNegative(int n) {
    return n < 0;
}

int isZero(int n) {
    return n == 0;
}

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isPerfect(int n) {
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n--- Classification Report ---\n");

    if (isEven(n))
        printf("Even: Yes\n");
    else
        printf("Even: No\n");

    if (isPositive(n))
        printf("Positive: Yes\n");
    else if (isNegative(n))
        printf("Negative: Yes\n");
    else
        printf("Zero: Yes\n");

    if (isPrime(n))
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    if (isPerfect(n))
        printf("Perfect: Yes\n");
    else
        printf("Perfect: No\n");

    return 0;
}
