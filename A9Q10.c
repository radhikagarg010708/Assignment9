//Write functions to sort an integer array in ascending and descending order by passing the array through pointers. Modify the original array without using a predefined sorting function or another array.
#include <stdio.h>

void ascending(int *a, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void descending(int *a, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void display(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ascending(a, n);
    printf("Ascending: ");
    display(a, n);

    descending(a, n);
    printf("Descending: ");
    display(a, n);

    return 0;
}
