#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i;

    printf("請輸入陣列大小:");
    scanf("%d", &size);

    arr = (int *)malloc(size *sizeof(int));
    if (arr ==NULL) {
        printf("記憶體分配失敗 ! \n");
        return 1;
    }
    for (i =0; i<size; i++){
        arr[i] = i+1;
    }
    printf("陣列內容:");
    for (i=0;i<size;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}