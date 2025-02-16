#include <stdio.h>

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("Not an alphabet\n");
    }
}

int main() {
    char ch;
    scanf(" %c", &ch); 
    checkCase(ch);
    return 0;
}