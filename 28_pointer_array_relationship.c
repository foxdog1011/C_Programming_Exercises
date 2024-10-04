#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    
    //將指標p 指向陣列的首元素
    p = arr;
    
    printf("使用指標訪問陣列元素:\n");
    for (int i=0; i<5; i++){
        printf("arr[%d] = %d\n", i, *(p+i));
    }
    return 0;
}