#include <stdio.h>

int countTrailingZeroes(unsigned int num) {
    if (num == 0) return 32;  

    int count = 0;
    while ((num & 1) == 0) {  
        count++;
        num >>= 1; 
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int trailingZeroes = countTrailingZeroes(num);
    printf("%d\n", trailingZeroes);

    return 0;
}