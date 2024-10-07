#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z;
    int ***arr;
    int i,j,k;

    printf("請輸入 x,y,z 的大小:");

    arr = (int ***)malloc(x*sizeof(int **));
    for (i=0; i<x; i++){
        arr[i] = (int **)malloc(y *sizeof(int *));
        for(j=0; j<y;j++){
            arr[i][j] = (int *)malloc(z * sizeof(int));
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                arr[i][j][k] = i*y*z + j*z+k;
            }
        }
    }

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);

    return 0;
}