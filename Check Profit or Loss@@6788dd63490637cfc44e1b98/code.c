#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); 
    if (num1 < num2) {
        printf("Profit");
    } else if (num1 > num2) {
        printf("Loss");
    }
    else {
        printf("No Profit No Loss");
    }
return 0;
}