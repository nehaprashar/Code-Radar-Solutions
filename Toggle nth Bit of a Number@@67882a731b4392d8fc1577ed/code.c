#include <stdio.h>
int toggleNthBit(int num1, int num2) {
    return num1 ^ (1<<num2);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int bit = toggleNthBit(num1, num2);
    printf("%d\n", bit); 
    return 0;
}