#include <stdio.h>

int findLowestSetBitPosition(int num) {
    return (num == 0) ? -1 : __builtin_ctz(num);

}

int main() {
    int num;
    scanf("%d", &num);

    int pos = findLowestSetBitPosition(num);
    printf("%d\n", pos);

    return 0;
}