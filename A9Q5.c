//Write pass-by-value functions to calculate the total and percentage of marks in five subjects, determine the grade, and check whether the student passed every subject. A student fails if the score in any subject is below 40.
#include <stdio.h>

int calculateTotal(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float calculatePercentage(int total) {
    return total / 5.0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int isPassed(int a, int b, int c, int d, int e) {
    return (a >= 40 && b >= 40 && c >= 40 &&
            d >= 40 && e >= 40);
}

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);
    grade = calculateGrade(percentage);

    printf("\n--- Student Grade Report ---\n");
    printf("Total Marks = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    if (isPassed(m1, m2, m3, m4, m5))
        printf("Result = PASS\n");
    else
        printf("Result = FAIL\n");

    return 0;
}
