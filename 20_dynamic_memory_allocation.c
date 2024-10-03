#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n, i;

    printf("請輸入要分配的元素數量:");
    scanf("%d, &n");

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("記憶體分配失敗\n");
        return 1;
    }

    for (i = 0; i<n; i++){
        printf("%d", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}