//Write a function using pointers to cyclically interchange three values as follows: a <- b, b <- c, c <- a. Display the values before and after swapping.
#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    cyclicSwap(&a, &b, &c);

    printf("\nAfter cyclic swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
