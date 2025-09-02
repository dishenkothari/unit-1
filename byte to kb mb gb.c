#include <stdio.h>
int main() {
    double bytes;
    scanf("%lf", &bytes);
    printf("%lf KB\n", bytes / 1024);
    printf("%lf MB\n", bytes / (1024 * 1024));
    printf("%lf GB\n", bytes / (1024 * 1024 * 1024));
    return 0;
}
