//Without sorting, write a function using pointer parameters to find the smallest, second-smallest, greatest, and second-greatest distinct elements of an array. Display an appropriate message if fewer than two distinct values exist.
#include <stdio.h>

void find(int *a, int n, int *s, int *ss, int *g, int *gg) {
    int i;

    *s = *ss = 99999;
    *g = *gg = -99999;

    for (i = 0; i < n; i++) {
        if (a[i] < *s) *s = a[i];
        if (a[i] > *g) *g = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] > *s && a[i] < *ss) *ss = a[i];
        if (a[i] < *g && a[i] > *gg) *gg = a[i];
    }
}

int main() {
    int a[100], n, i, s, ss, g, gg;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    find(a, n, &s, &ss, &g, &gg);

    if (ss == 99999 || gg == -99999)
        printf("Fewer than two distinct values exist.\n");
    else {
        printf("Smallest = %d\n", s);
        printf("Second Smallest = %d\n", ss);
        printf("Greatest = %d\n", g);
        printf("Second Greatest = %d\n", gg);
    }

    return 0;
}
