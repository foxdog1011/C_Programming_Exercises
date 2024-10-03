#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b = 20;

    printf("交換前: a = %d, b = %d\n",a, b);

    swap(&a, &b);

    printf("交換後: a = %d, b = %d\n", a, b);
    return 0;
}
