#include <stdio.h>

int main() {
    char grade;  

    scanf("%c", &grade);  

    if (grade == 'A') {
        printf("Excellent\n");
    }
    else if (grade == 'B') {
        printf("Good");
    }
    else if (grade == 'C') {
        printf("Average");
    }
    else if (grade == 'D') {
        printf("Below Average");
    }
    else if (grade == 'F') {
        printf("Fail");
    }
    else {
        print("Invalid grade");
    }
    return 0;
}