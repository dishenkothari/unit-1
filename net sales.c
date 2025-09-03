#include <stdio.h>
int main() {
    float gross, discount, net;
    scanf("%f", &gross);
    discount = gross * 0.10;
    net = gross - discount;
    printf("%f", net);
    return 0;
}
