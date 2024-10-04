#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;
    int **arr;
    int i, j;

    printf("請輸入行數: ");
    scanf("%d", &rows);
    printf("請輸入列數:");
    scanf("%d", &cols);

    arr = (int **)malloc(rows * sizeof(int *));
    for (i =0; i<rows; i++){
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (i=0; i<rows;i++){
        for(j=0; j< cols; j++){
            arr[i][j] = i *cols+j;
        }
    }

    printf("二維陣列內容:\n");
    for(i =0; i<rows; i++){
        for(j = 0;j<cols; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<rows; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}