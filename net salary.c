#include <stdio.h>
int main() {
    float gross, allowance, deduction, net;
    scanf("%f", &gross);
    allowance = gross * 0.10;
    deduction = gross * 0.03;
    net = gross + allowance - deduction;
    printf("%f", net);
    return 0;
}
