#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d", x&~(x<<y));
    return 0;
}