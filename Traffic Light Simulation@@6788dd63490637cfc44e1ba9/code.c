#include <stdio.h>

int main() {
    char Traffic light[100];
    scanf("%c", &Traffic light );

    if (Traffic light == R) printf("Stop");
    else if (Traffic light == G) printf("GO");
    
    else printf("Slow Down");

    return 0;
}