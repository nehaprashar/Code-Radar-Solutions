#include <stdio.h>

int countLeadingZeroes(unsigned int num) {
    if (num == 0) return 32;  

    int count = 0;
    while ((num & (1 << 31)) == 0) {  
        count++;
        num <<= 1;  
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeroes = countLeadingZeroes(num);
    printf("%d\n", leadingZeroes);

    return 0;
}