//Without using functions from string.h, write a function that returns through pointer parameters the numbers of vowels, consonants, digits, spaces, and special characters in a string. Treat uppercase and lowercase letters identically.
#include <stdio.h>

void analyze(char *s, int *v, int *c, int *d, int *sp, int *sc) {
    int i = 0;

    *v = *c = *d = *sp = *sc = 0;

    while (s[i] != '\0') {
        char ch = s[i];

        if (ch == ' ')
            (*sp)++;
        else if (ch >= '0' && ch <= '9')
            (*d)++;
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
                (*v)++;
            else
                (*c)++;
        }
        else
            (*sc)++;

        i++;
    }
}

int main() {
    char str[100];
    int v, c, d, sp, sc;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    analyze(str, &v, &c, &d, &sp, &sc);

    printf("\nVowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d\n", sp);
    printf("Special Characters = %d\n", sc);

    return 0;
}
