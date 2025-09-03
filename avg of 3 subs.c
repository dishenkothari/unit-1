#include <stdio.h>
int main() {
    float s1, s2, s3, total, average;
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    average = total / 3;
    printf("%f\n%f", total, average);
    return 0;
}
