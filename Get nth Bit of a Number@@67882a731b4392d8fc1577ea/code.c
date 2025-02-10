#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int bit = (y>>x) & 1;
    printf("%d", bit);
    return 0;
}