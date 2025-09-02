#include <stdio.h>
int main() {
    float l, area, perimeter;
    scanf("%f", &l);
    area = l * l;
    perimeter = 4 * l;
    printf("%f\n%f", area, perimeter);
    return 0;
}
