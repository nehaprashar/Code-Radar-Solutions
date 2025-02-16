#include <stdio.h>

void checkCharacter(char ch) {

    if (ch >= 'a' && ch <= 'z') { 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    } 
    else if (ch >= '0' && ch <= '9') { 
        printf("Digit");
    } 
    else {
        printf("Vowel");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
    checkCharacter(ch);

    return 0;
}