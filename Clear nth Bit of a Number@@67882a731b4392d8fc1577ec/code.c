#include <stdio.h>
int clearNthBit(int num1, int num2) {
    return num1 & ~(1<<num2);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int bit = clearNthBit(num1, num2);
    printf("%d\n", bit); 
    return 0;
}