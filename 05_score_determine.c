#include <stdio.h>

int main() {
    int score;  // 確保這裡是小寫的 'score'

    // 提示用戶輸入成績
    printf("請輸入成績 (0-100): ");
    
    // 檢查是否輸入了有效的整數，並且範圍在 0 到 100 之間
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) {  // 確保這裡是小寫的 'score'
        printf("輸入無效，請輸入一個 0 到 100 之間的整數。\n");
        return 1;
    }

    // 根據成績判斷等級
    if (score >= 90) {  // 確保這裡是小寫的 'score'
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
