#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i =0; i<5; i++){
        printf("arr[%d] = %d\n", i, *(p+i));
    }
    return 0;
}