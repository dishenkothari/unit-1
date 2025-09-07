#include <stdio.h>
int main() {
    float s1, s2, s3, total, average;
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    average = total / 3;
    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Total: %f\nAverage: %f\nGrade: Fail", total, average);
    } else if (average >= 70) {
        printf("Total: %f\nAverage: %f\nGrade: Distinction", total, average);
    } else if (average >= 60) {
        printf("Total: %f\nAverage: %f\nGrade: First", total, average);
    } else if (average >= 50) {
        printf("Total: %f\nAverage: %f\nGrade: Second", total, average);
    } else if (average >= 35) {
        printf("Total: %f\nAverage: %f\nGrade: Third", total, average);
    } else {
        printf("Total: %f\nAverage: %f\nGrade: Fail", total, average);
    }
    return 0;
}
