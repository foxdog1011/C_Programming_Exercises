#include <stdio.h>

int main(){
    int a = 5;

    int leftShift = a<<1;
    printf("a<<1 = %d\n", leftShift);

    int rightShift = a>>1;
    printf("a>>1 = %d\n", rightShift);

    return 0;
}