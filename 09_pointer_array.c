#include <stdio.h>

void reverse(int *arr, int size){
    int temp, i;

    for(i =0; i <size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1]  = temp;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int i;

    printf("反轉前的陣列: ");
    for(i = 0; i<0;i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    reverse(arr, 6);

    printf("反轉後的陣列:");
    for (i=0 ;i<6;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}