#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z;
    int ***arr;
    int i,j,k;

    printf("請輸入 x,y,z的大小:");
    scanf("%d %d %d", &x,&y,&z);

    arr = (int ***)malloc(x * sizeof(int **));
    for (i=0; i<x; i++){
        arr[i] = (int **)malloc(y * sizeof(int *));
        for (j =0;j<y; j++){
            arr[i][j] = (int *)malloc(z * sizeof(int));
        }
    }
    // 填充三維振列
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            for(k=0; k<z; k++){
                arr[i][j][k] = i*y*z +j*z+k;
            }
        }
    }
    // 打印三維陣列
    printf("三維陣列內容:\n");
    for(i=0; i<x; i++){
        for(j =0; j <y; j++){
            for (k = 0; k<z; k++){
                printf("arr[%d][%d][%d] = %d\n", i,j,k,arr[i][j][k]);
            }
        }
    }
    for (i =0; i<x; i++){
        for(j=0; j<y; j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}