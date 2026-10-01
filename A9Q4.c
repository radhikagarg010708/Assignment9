//Write pass-by-value functions to calculate the GCD and LCM of three positive integers.
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcmThree(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n--- GCD and LCM ---\n");
    printf("GCD = %d\n", gcdThree(a, b, c));
    printf("LCM = %d\n", lcmThree(a, b, c));

    return 0;
}
