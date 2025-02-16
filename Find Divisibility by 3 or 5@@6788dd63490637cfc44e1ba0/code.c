#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1); 
    if ((num1 % 3 == 0) && (num1 % 5 == 0)) {
        printf("Divisible by Both");
    } else if (num1 % 5 == 0) {
        printf("Divisible by 5");
    }
    else if (num1 % 3 == 0) {
        printf("Divisible by 3");
    }
    else {
        printf("Not Divisible");
    }
return 0;
}