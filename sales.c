#include <stdio.h>
int main() {
    float gross, discount, net;
    scanf("%f", &gross);
    if (gross > 20000) {
        discount = gross * 0.15;
    } else if (gross > 10000) {
        discount = gross * 0.10;
    } else {
        discount = gross * 0.05;
    }
    net = gross - discount;
    printf("%f", net);
    return 0;
}
