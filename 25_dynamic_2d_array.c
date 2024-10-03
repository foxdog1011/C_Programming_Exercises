#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int **arr;
    int i, j;

    printf("請輸入行數: ");
    scanf("%d", &rows);
    printf("請輸入列數:");
    scanf("%d", &cols);

    arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i<rows;i++){
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("請輸入陣列元素:\n");
    for (i = 0; i< rows;i++){
        for (j =0;j<cols;j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("陣列內容:\n");
    for(i=0; i<rows;i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}