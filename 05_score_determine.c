#include <stdio.h>

int main() {
    int score;

    // 提示用戶輸入成績
    printf("請輸入成績 (0-100): ");
    scanf("%d",&score);

    // 根據成績判斷等級
    if (score >= 90) {
        printf("成績等級：A\n");
    } else if (score >= 80) {
        printf("成績等級：B\n");
    } else if (score >= 70) {
        printf("成績等級：C\n");
    } else if (score >= 60) {
        printf("成績等級：D\n");
    } else {
        printf("成績等級：F\n");
    }

    return 0;
}
