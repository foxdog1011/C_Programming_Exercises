#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str;
    int n;

    printf("請輸入字串長度:");
    scanf("%d", &n);

    str = (char *)malloc((n+1) * sizeof(char));

    if (str == NULL) {
        printf("內存分配失敗\n");
        return 1;
    }

    printf("請輸入字串:");
    scanf("%s", str);

    printf("輸入的字串: %s\n", str);
    free(str);
    return 0;
}