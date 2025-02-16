#include <stdio.h>

void decimalToBinary(unsigned int num) {
    if (num > 1) decimalToBinary(num >> 1);
    printf("%d", num & 1);
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    decimalToBinary(num);
    return 0;
}