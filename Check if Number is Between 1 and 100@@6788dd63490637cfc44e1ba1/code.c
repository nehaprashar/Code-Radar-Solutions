#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1); 
    if ((num1 >= 1) && (num1 <= 100) ) {
        printf("In Range");
    } 
    else {
        printf("Out of Range");
    }
return 0;
}