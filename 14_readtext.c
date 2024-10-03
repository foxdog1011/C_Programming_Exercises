#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];  // 用於儲存讀取的文本

    // 打開文件進行讀取
    fptr = fopen("student_data.txt", "r");  // 使用 "r" 模式讀取文件
    if (fptr == NULL) {
        printf("failed\n");
        return 1;
    }

    // 從文件中讀取數據並輸出到屏幕
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);  // 每次讀取一行並輸出
    }

    // 關閉文件
    fclose(fptr);
    printf("success\n");

    return 0;
}
